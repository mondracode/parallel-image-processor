#define STB_IMAGE_IMPLEMENTATION
#include "lib/stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "lib/stb_image_write.h"
#include <omp.h>

// function prototypes
void apply_filter(unsigned char *image, int width, int height, int channels);

int main(int argc, char const *argv[]) {
    const char *input_filename = argv[1];
    const char *output_filename = argv[2];
    const char *threads_arg = argv[3];

    int width, height;
    int channels; // (like R, G, B and such)
    int num_of_threads = atoi(threads_arg);

    omp_set_num_threads(num_of_threads);

    // load image
    unsigned char *image = stbi_load(input_filename, &width, &height, &channels, 0); // 0 is default to avoid forcing a specific channel number
    unsigned int image_size = width * height * channels;

    if (image == NULL) {
        perror("image is null");
        return 1;
    }

    printf("\nProcessing %s\n", input_filename);
    printf("width is %d and height is %d at %d channels per pixel\n", width, height, channels);
    printf("working with %d threads\n", omp_get_max_threads());

    //do stuff
    apply_filter(image, width, height, channels);

    //"stride_in_bytes" is the distance in bytes
    //from the first byte of a row of pixels
    //to the first byte of the next row of pixels.
    int stride_in_bytes = width * channels;

    //then save
    stbi_write_png(output_filename, width, height, channels, image, stride_in_bytes);

    // close image
    stbi_image_free(image);

    return 0;
}

void apply_filter(unsigned char *image_start, int width, int height, int channels) {
    // color inversion filter
    // for b&w, it inverts luminosity
    // for b&w with alpha, transparency areas are inverted as well

    int image_size = width * height * channels;

    if (channels < 2) {
// B&W/G images
#pragma omp parallel for
        for (unsigned char *current_image_idx = image_start; current_image_idx < image_start + image_size; current_image_idx += channels) {

            unsigned char *gray = current_image_idx;
            *gray = 255 - *gray;
        }
    }
    if (channels == 2) {
#pragma omp parallel for
        for (unsigned char *current_image_idx = image_start; current_image_idx < image_start + image_size; current_image_idx += channels) {

            // G, A images
            unsigned char *alpha = (current_image_idx + 1);

            //invert
            *alpha = 255 - *alpha;
        }
    }
    if (channels == 3) {
#pragma omp parallel for
        for (unsigned char *current_image_idx = image_start; current_image_idx < image_start + image_size; current_image_idx += channels) {

            // R, G, B images

            unsigned char *red = current_image_idx;
            unsigned char *green = (current_image_idx + 1);
            unsigned char *blue = (current_image_idx + 2);

            //swap colors around
            *red = 255 - *red;
            *green = 255 - *green;
            *blue = 255 - *blue;
        }
    }
}