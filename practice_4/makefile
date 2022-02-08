CC=mpicc

4k: mpi_image_processor.c
	$(CC) mpi_image_processor.c -o mpi_image_processor -lm
	$ (echo "----------------------4K------------------------") >> time_results.txt 2>&1

	$ (echo "-----host + 1 node------") >> time_results.txt 2>&1
	$ (time -p mpirun -np 2 --hostfile mpi-hosts ./mpi_image_processor img/4K/4k_color_duck.png img/4K/output_4k_color_duck.png 2) >> time_results.txt 2>&1
	$ (time -p mpirun -np 2 --hostfile mpi-hosts ./mpi_image_processor img/4K/4k_bw_alpha_duck.png img/4K/output_4k_bw_alpha_duck.png 2) >> time_results.txt 2>&1
	$ (time -p mpirun -np 2 --hostfile mpi-hosts ./mpi_image_processor img/4K/4k_bw_duck.png img/4K/output_4k_bw_duck.png 2) >> time_results.txt 2>&1
	
	$ (echo "-----host + 2 nodes-----") >> time_results.txt 2>&1
	$ (time -p mpirun -np 3 --hostfile mpi-hosts ./mpi_image_processor img/4K/4k_color_duck.png img/4K/output_4k_color_duck.png 4) >> time_results.txt 2>&1
	$ (time -p mpirun -np 3 --hostfile mpi-hosts ./mpi_image_processor img/4K/4k_bw_alpha_duck.png img/4K/output_4k_bw_alpha_duck.png 4) >> time_results.txt 2>&1
	$ (time -p mpirun -np 3 --hostfile mpi-hosts ./mpi_image_processor img/4K/4k_bw_duck.png img/4K/output_4k_bw_duck.png 4) >> time_results.txt 2>&1
	
	$ (echo "-----host + 3 nodes-----") >> time_results.txt 2>&1
	$ (time -p mpirun -np 4 --hostfile mpi-hosts ./mpi_image_processor img/4K/4k_color_duck.png img/4K/output_4k_color_duck.png 8) >> time_results.txt 2>&1
	$ (time -p mpirun -np 4 --hostfile mpi-hosts ./mpi_image_processor img/4K/4k_bw_alpha_duck.png img/4K/output_4k_bw_alpha_duck.png 8) >> time_results.txt 2>&1
	$ (time -p mpirun -np 4 --hostfile mpi-hosts ./mpi_image_processor img/4K/4k_bw_duck.png img/4K/output_4k_bw_duck.png 8) >> time_results.txt 2>&1
	

1080p: mpi_image_processor.c
	$(CC) mpi_image_processor.c -o mpi_image_processor -lm
	$ (echo "----------------------1080p---------------------") >> time_results.txt 2>&1

	$ (echo "-----host + 1 node------") >> time_results.txt 2>&1
	$ (time -p mpirun -np 2 --hostfile mpi-hosts ./mpi_image_processor img/1080p/1080p_color_f1.png img/1080p/output_1080p_color_f1.png) >> time_results.txt 2>&1
	$ (time -p mpirun -np 2 --hostfile mpi-hosts ./mpi_image_processor img/1080p/1080p_bw_alpha_f1.png img/1080p/output_1080p_bw_alpha_f1.png) >> time_results.txt 2>&1
	$ (time -p mpirun -np 2 --hostfile mpi-hosts ./mpi_image_processor img/1080p/1080p_bw_f1.png img/1080p/output_1080p_bw_f1.png) >> time_results.txt 2>&1

	$ (echo "-----host + 2 nodes-----") >> time_results.txt 2>&1
	$ (time -p mpirun -np 3 --hostfile mpi-hosts ./mpi_image_processor img/1080p/1080p_color_f1.png img/1080p/output_1080p_color_f1.png) >> time_results.txt 2>&1
	$ (time -p mpirun -np 3 --hostfile mpi-hosts ./mpi_image_processor img/1080p/1080p_bw_alpha_f1.png img/1080p/output_1080p_bw_alpha_f1.png) >> time_results.txt 2>&1
	$ (time -p mpirun -np 3 --hostfile mpi-hosts ./mpi_image_processor img/1080p/1080p_bw_f1.png img/1080p/output_1080p_bw_f1.png) >> time_results.txt 2>&1

	$ (echo "-----host + 1 nodes-----") >> time_results.txt 2>&1
	$ (time -p mpirun -np 4 --hostfile mpi-hosts ./mpi_image_processor img/1080p/1080p_color_f1.png img/1080p/output_1080p_color_f1.png) >> time_results.txt 2>&1
	$ (time -p mpirun -np 4 --hostfile mpi-hosts ./mpi_image_processor img/1080p/1080p_bw_alpha_f1.png img/1080p/output_1080p_bw_alpha_f1.png) >> time_results.txt 2>&1
	$ (time -p mpirun -np 4 --hostfile mpi-hosts ./mpi_image_processor img/1080p/1080p_bw_f1.png img/1080p/output_1080p_bw_f1.png) >> time_results.txt 2>&1

720p: mpi_image_processor.c
	$(CC) mpi_image_processor.c -o mpi_image_processor -lm
	$ (echo "----------------------720p-------------------------") >> time_results.txt 2>&1

	$ (echo "-----host + 1 node------") >> time_results.txt 2>&1
	$ (time -p mpirun -np 2 --hostfile mpi-hosts ./mpi_image_processor img/720p/720p_color_santorini.png img/720p/output_720p_color_santorini.png) >> time_results.txt 2>&1
	$ (time -p mpirun -np 2 --hostfile mpi-hosts ./mpi_image_processor img/720p/720p_bw_alpha_santorini.png img/720p/output_720p_bw_alpha_santorini.png) >> time_results.txt 2>&1
	$ (time -p mpirun -np 2 --hostfile mpi-hosts ./mpi_image_processor img/720p/720p_bw_santorini.png img/720p/output_720p_bw_santorini.png) >> time_results.txt 2>&1

	$ (echo "-----host + 2 nodes-----") >> time_results.txt 2>&1
	$ (time -p mpirun -np 3 --hostfile mpi-hosts ./mpi_image_processor img/720p/720p_color_santorini.png img/720p/output_720p_color_santorini.png) >> time_results.txt 2>&1
	$ (time -p mpirun -np 3 --hostfile mpi-hosts ./mpi_image_processor img/720p/720p_bw_alpha_santorini.png img/720p/output_720p_bw_alpha_santorini.png) >> time_results.txt 2>&1
	$ (time -p mpirun -np 3 --hostfile mpi-hosts ./mpi_image_processor img/720p/720p_bw_santorini.png img/720p/output_720p_bw_santorini.png) >> time_results.txt 2>&1

	$ (echo "-----host + 3 nodes-----") >> time_results.txt 2>&1
	$ (time -p mpirun -np 4 --hostfile mpi-hosts ./mpi_image_processor img/720p/720p_color_santorini.png img/720p/output_720p_color_santorini.png) >> time_results.txt 2>&1
	$ (time -p mpirun -np 4 --hostfile mpi-hosts ./mpi_image_processor img/720p/720p_bw_alpha_santorini.png img/720p/output_720p_bw_alpha_santorini.png) >> time_results.txt 2>&1
	$ (time -p mpirun -np 4 --hostfile mpi-hosts ./mpi_image_processor img/720p/720p_bw_santorini.png img/720p/output_720p_bw_santorini.png) >> time_results.txt 2>&1

all: 4k 1080p 720p