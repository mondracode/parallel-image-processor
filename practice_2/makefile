CC=clang

4k: openmp_image_processor.c
	$(CC) -Xpreprocessor -fopenmp openmp_image_processor.c -lomp
	$ (echo "----------------------4K------------------------") >> time_results.txt 2>&1
	$ (echo "-----2 threads------") >> time_results.txt 2>&1
	$ (time ./a.out img/4K/4k_bw_alpha_duck.png img/4K/output_4k_bw_alpha_duck.png 2) >> time_results.txt 2>&1
	$ (time ./a.out img/4K/4k_bw_duck.png img/4K/output_4k_bw_duck.png 2) >> time_results.txt 2>&1
	$ (time ./a.out img/4K/4k_color_duck.png img/4K/output_4k_color_duck.png 2) >> time_results.txt 2>&1
	
	$ (echo "-----4 threads------") >> time_results.txt 2>&1
	$ (time ./a.out img/4K/4k_bw_alpha_duck.png img/4K/output_4k_bw_alpha_duck.png 4) >> time_results.txt 2>&1
	$ (time ./a.out img/4K/4k_bw_duck.png img/4K/output_4k_bw_duck.png 4) >> time_results.txt 2>&1
	$ (time ./a.out img/4K/4k_color_duck.png img/4K/output_4k_color_duck.png 4) >> time_results.txt 2>&1

	
	$ (echo "-----8 threads------") >> time_results.txt 2>&1
	$ (time ./a.out img/4K/4k_bw_alpha_duck.png img/4K/output_4k_bw_alpha_duck.png 8) >> time_results.txt 2>&1
	$ (time ./a.out img/4K/4k_bw_duck.png img/4K/output_4k_bw_duck.png 8) >> time_results.txt 2>&1
	$ (time ./a.out img/4K/4k_color_duck.png img/4K/output_4k_color_duck.png 8) >> time_results.txt 2>&1

	$ (echo "-----16 threads------") >> time_results.txt 2>&1
	$ (time ./a.out img/4K/4k_bw_alpha_duck.png img/4K/output_4k_bw_alpha_duck.png 16) >> time_results.txt 2>&1
	$ (time ./a.out img/4K/4k_bw_duck.png img/4K/output_4k_bw_duck.png 16) >> time_results.txt 2>&1
	$ (time ./a.out img/4K/4k_color_duck.png img/4K/output_4k_color_duck.png 16) >> time_results.txt 2>&1


1080p: openmp_image_processor.c
	$(CC) -Xpreprocessor -fopenmp openmp_image_processor.c -lomp
	$ (echo "----------------------1080p------------------------") >> time_results.txt 2>&1
	$ (echo "-----2 threads------") >> time_results.txt 2>&1
	$ (time ./a.out img/1080p/1080p_bw_alpha_f1.png img/1080p/output_1080p_bw_alpha_f1.png 2) >> time_results.txt 2>&1
	$ (time ./a.out img/1080p/1080p_bw_f1.png img/1080p/output_1080p_bw_f1.png 2) >> time_results.txt 2>&1
	$ (time ./a.out img/1080p/1080p_color_f1.png img/1080p/output_1080p_color_f1.png 2) >> time_results.txt 2>&1

	$ (echo "-----4 threads------") >> time_results.txt 2>&1
	$ (time ./a.out img/1080p/1080p_bw_alpha_f1.png img/1080p/output_1080p_bw_alpha_f1.png 4) >> time_results.txt 2>&1
	$ (time ./a.out img/1080p/1080p_bw_f1.png img/1080p/output_1080p_bw_f1.png 4) >> time_results.txt 2>&1
	$ (time ./a.out img/1080p/1080p_color_f1.png img/1080p/output_1080p_color_f1.png 4) >> time_results.txt 2>&1

	$ (echo "-----8 threads------") >> time_results.txt 2>&1
	$ (time ./a.out img/1080p/1080p_bw_alpha_f1.png img/1080p/output_1080p_bw_alpha_f1.png 8) >> time_results.txt 2>&1
	$ (time ./a.out img/1080p/1080p_bw_f1.png img/1080p/output_1080p_bw_f1.png 8) >> time_results.txt 2>&1
	$ (time ./a.out img/1080p/1080p_color_f1.png img/1080p/output_1080p_color_f1.png 8) >> time_results.txt 2>&1

	$ (echo "-----16 threads------") >> time_results.txt 2>&1
	$ (time ./a.out img/1080p/1080p_bw_alpha_f1.png img/1080p/output_1080p_bw_alpha_f1.png 16) >> time_results.txt 2>&1
	$ (time ./a.out img/1080p/1080p_bw_f1.png img/1080p/output_1080p_bw_f1.png 16) >> time_results.txt 2>&1
	$ (time ./a.out img/1080p/1080p_color_f1.png img/1080p/output_1080p_color_f1.png 16) >> time_results.txt 2>&1

720p: openmp_image_processor.c
	$(CC) -Xpreprocessor -fopenmp openmp_image_processor.c -lomp
	$ (echo "----------------------1080p------------------------") >> time_results.txt 2>&1
	$ (echo "-----2 threads------") >> time_results.txt 2>&1
	$ (time ./a.out img/720p/720p_bw_alpha_santorini.png img/720p/output_720p_bw_alpha_santorini.png 2) >> time_results.txt 2>&1
	$ (time ./a.out img/720p/720p_bw_santorini.png img/720p/output_720p_bw_santorini.png 2) >> time_results.txt 2>&1
	$ (time ./a.out img/720p/720p_color_santorini.png img/720p/output_720p_color_santorini.png 2) >> time_results.txt 2>&1

	$ (echo "-----4 threads------") >> time_results.txt 2>&1
	$ (time ./a.out img/720p/720p_bw_alpha_santorini.png img/720p/output_720p_bw_alpha_santorini.png 4) >> time_results.txt 2>&1
	$ (time ./a.out img/720p/720p_bw_santorini.png img/720p/output_720p_bw_santorini.png 4) >> time_results.txt 2>&1
	$ (time ./a.out img/720p/720p_color_santorini.png img/720p/output_720p_color_santorini.png 4) >> time_results.txt 2>&1

	$ (echo "-----8 threads------") >> time_results.txt 2>&1
	$ (time ./a.out img/720p/720p_bw_alpha_santorini.png img/720p/output_720p_bw_alpha_santorini.png 8) >> time_results.txt 2>&1
	$ (time ./a.out img/720p/720p_bw_santorini.png img/720p/output_720p_bw_santorini.png 8) >> time_results.txt 2>&1
	$ (time ./a.out img/720p/720p_color_santorini.png img/720p/output_720p_color_santorini.png 8) >> time_results.txt 2>&1

	$ (echo "-----16 threads------") >> time_results.txt 2>&1
	$ (time ./a.out img/720p/720p_bw_alpha_santorini.png img/720p/output_720p_bw_alpha_santorini.png 16) >> time_results.txt 2>&1
	$ (time ./a.out img/720p/720p_bw_santorini.png img/720p/output_720p_bw_santorini.png 16) >> time_results.txt 2>&1
	$ (time ./a.out img/720p/720p_color_santorini.png img/720p/output_720p_color_santorini.png 16) >> time_results.txt 2>&1


all: 4k 1080p 720p
