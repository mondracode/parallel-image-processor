#define STB_IMAGE_IMPLEMENTATION
#include "lib/stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "lib/stb_image_write.h"

// function prototypes
void apply_filter(unsigned char *image, int width, int height, int channels, int kernel_size);

int main(int argc, char const *argv[]) {
    const char *input_filename = argv[1];
    const char *output_filename = argv[2];
    const char *kernel_size = argv[3];
    // more args will be added later

    int width, height;
    int channels; // (like R, G, B and such)

    // load image
    unsigned char *image = stbi_load(input_filename, &width, &height, &channels, 0); // 0 is default to avoid forcing a specific channel number
    unsigned int image_size = width * height * channels;

    if (image == NULL) {
        perror("image is null");
        return 1;
    }

    printf("\nProcessing %s\n", input_filename);
    printf("width is %d and height is %d at %d channels per pixel\n", width, height, channels);

    //do stuff
    apply_filter(image, width, height, channels, 10);

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

void apply_filter(unsigned char *image, int width, int height, int channels, int kernel_size) {
    // this filter just swaps the image channels around
    // for images with more than one channel (G, A), (R, G, B) or (R, G, B, A)
    // for single gray channel images, it swaps each pixel with
    // the next one, don't know what that results in yet
    int image_size = width * height * channels;

    for (unsigned char *i = image; i < image + image_size; i += channels) {
        if (channels <= 2) {
            // B&W/G images
            unsigned char *gray = i;

            *gray = 255 - *gray;
        }
        if (channels == 2) {
            // G, A images
            unsigned char *alpha = (i + 1);

            //invert
            *alpha = 255 - *alpha;
        } else if (channels == 3) {
            // R, G, B images

            unsigned char *red = i;
            unsigned char *green = (i + 1);
            unsigned char *blue = (i + 2);

            //swap colors around
            *red = 255 - *red;
            *green = 255 - *green;
            *blue = 255 - *blue;
        }
    }
}