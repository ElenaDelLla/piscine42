#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>



int	main (int argc, char **argv)
{

	int		rows;
	int		cols;
	char	**matrix;
	int i;
	int	src_map;
	int map_bytes;
	int 	*map_buffer [1024];
	char newFile[1024];

	src_map = open("example_file", O_RDONLY); //abrimos el diccionario: da el nombre y el modo
	if (src_map == -1) //si da -1, ha habido error de lectura del fichero
	{
		write(1, "map error no abre\n", 30);
		return (0);
	}
	else
	{
		write(1, &src_map, 3);
		printf("src_map: %d\n", src_map);
	}
	
map_bytes =0;
printf("bytes antes: %d\n", map_bytes);
while (read(src_map, map_buffer, 1))
	map_bytes++;
//printf("bytes después: %d\n", map_bytes);
	if (map_bytes <= 0) //si da 0, archivo del mapa está vacío o errores
	{
		write(1, "map error no tiene datos\n", 30);
		return (0);
	}
	else
		printf("bytes totales: %d\n", map_bytes);
	





/*	
	i= 0;
	while (i < 400)
	{
	newFile[i] = map_buffer[i];
	i++;
	}

	i=0;
	while (i < 400)
	{
	write (1, &newFile[i], 1);
	i++;
	}
	printf("\n");
*/
	close(src_map);

// hacer función para leer el mapa y extraer parámetos y crear matrix




// fin leer y crear matrix



	i = 1;
	while (i < argc)
	{
//		read_map_file(argv[i], matrix, i);
//		solve_puzzle(matrix, parámetros de caracteres); //probablemente mejor llamar desde read_map_file
//		print_matrix(**matrix, rows, cols);
		i++;
	}
	return (0);
}