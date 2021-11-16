CC=gcc

4k: sequential_image_processor.c
	$(CC) sequential_image_processor.c -o sequential_image_processor
	./sequential_image_processor img/4K/4k_bw_alpha_duck.png img/4K/output_4k_bw_alpha_duck.png
	./sequential_image_processor img/4K/4k_bw_duck.png img/4K/output_4k_bw_duck.png
	./sequential_image_processor img/4K/4k_color_duck.png img/4K/output_4k_color_duck.png

1080p: sequential_image_processor.c
	$(CC) sequential_image_processor.c -o sequential_image_processor
	./sequential_image_processor img/1080p/1080p_bw_alpha_f1.png
	./sequential_image_processor img/1080p/1080p_bw_f1.png
	./sequential_image_processor img/1080p/1080p_color_f1.png

720p: sequential_image_processor.c
	$(CC) sequential_image_processor.c -o sequential_image_processor
	./sequential_image_processor img/720p/720p_bw_alpha_santorini.png
	./sequential_image_processor img/720p/720p_bw_santorini.png
	./sequential_image_processor img/720p/720p_color_santorini.png

all: 4k 1080p 720p
