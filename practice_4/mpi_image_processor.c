#define STB_IMAGE_IMPLEMENTATION
#include "lib/stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "lib/stb_image_write.h"
#include <mpi.h>

// function prototypes
void apply_filter(unsigned char *image, int width, int height, int channels, int iam, int tasks);

int main(int argc, char *argv[]) {
    const char *input_filename = argv[1];
    const char *output_filename = argv[2];

    int tag = 1, width, height, iam, tasks;
    int channels; // (like R, G, B and such)

    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &tasks);
    MPI_Comm_rank(MPI_COMM_WORLD, &iam);
    MPI_Status status;

    // load image
    unsigned char *image = stbi_load(input_filename, &width, &height, &channels, 0); // 0 is default to avoid forcing a specific channel number
    unsigned int image_size = width * height * channels;
    int partition = image_size / (tasks - 1);

    if (image == NULL) {
        perror("image is null");
        return 1;
    }

    // we create an array to store the different slices the processes will manipulate
    unsigned char *image_slice[tasks - 1];
    image_slice[iam - 1] = (unsigned char *)malloc(partition);

    if (iam == 0) {
        printf("\nProcessing %s\n", input_filename);
        printf("width is %d and height is %d at %d channels per pixel\n", width, height, channels);

        // host sends the original image slices to the other nodes
        for (size_t i = 1; i < tasks; i++) {
            MPI_Send(image + (partition * (i - 1)), partition, MPI_UNSIGNED_CHAR, i, tag, MPI_COMM_WORLD);
        }

        // and waits for the nodes to send back the processed slices
        for (size_t i = 1; i < tasks; i++) {
            MPI_Recv(image + (partition * (i - 1)), partition, MPI_UNSIGNED_CHAR, i, tag, MPI_COMM_WORLD, &status);
        }

        // "stride_in_bytes" is the distance in bytes
        // from the first byte of a row of pixels
        // to the first byte of the next row of pixels.
        int stride_in_bytes = width * channels;

        // then save
        stbi_write_png(output_filename, width, height, channels, image, stride_in_bytes);

        // close image
        stbi_image_free(image);
    } else {
        // node recieves the image slice
        MPI_Recv(image_slice[iam - 1], partition, MPI_UNSIGNED_CHAR, 0, tag, MPI_COMM_WORLD, &status);

        // does some filtering
        apply_filter(image_slice[iam - 1], width, height, channels, iam, tasks);

        // sends it back
        MPI_Send(image_slice[iam - 1], partition, MPI_UNSIGNED_CHAR, 0, tag, MPI_COMM_WORLD);
    }

    MPI_Finalize();
    return 0;
}

void apply_filter(unsigned char *image, int width, int height, int channels, int iam, int tasks) {
    // color inversion filter
    // for b&w, it inverts luminosity
    // for b&w with alpha, transparency areas are inverted as well

    int image_size = width * height * channels;
    int partition = image_size / (tasks - 1);

    // the host doesn't do math
    if (iam != 0) {
        // this weird az`mthèw allows us to split the image processing between each process
        // each process runs the loop only through its slice
        for (unsigned char *i = image; i < image + partition; i += channels) {
            if (channels <= 2) {
                // B&W/G images
                unsigned char *gray = i;

                *gray = 255 - *gray;
            }
            if (channels == 2) {
                // G, A images
                unsigned char *alpha = (i + 1);

                // invert
                *alpha = 255 - *alpha;
            } else if (channels == 3) {
                // R, G, B images
                unsigned char *red = i;
                unsigned char *green = (i + 1);
                unsigned char *blue = (i + 2);

                // swap colors around
                *red = 255 - *red;
                *green = 255 - *green;
                *blue = 255 - *blue;
            }
        }
    }
}