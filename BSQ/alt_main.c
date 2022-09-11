
#include "bsq_header.h"


char **read_matrix (char **matrix, char *argv);



int	main (int argc, char **argv)
{
	char	**matrix;
	int		i;
	int		j; //luego no hará falta, creo
	t_mapdata	map_data;
	


	map_data.rows = 9;
	map_data.cols = 14;
	if (map_data.rows < map_data.cols) // el cálculo del máx posible
		map_data.max = map_data.rows;
	else
		map_data.max = map_data.cols;
	map_data.empty = '-'; //debe tomarlo del archivo mapa
	map_data.obstacle = 'o';
	map_data.filled = 'x';
	
	
	
	
	printf ("%d %d %d", map_data.cols, map_data.rows, map_data.max);


	

	matrix = malloc(sizeof (char *) * (map_data.cols));
	i = 0;
	while (i < map_data.rows)
	{
		matrix[i] = malloc(sizeof (char *) * map_data.cols);
		i++;
	}

	



//crear la matriz del mapa - cambiarla por la lectura del fichero mapa
	i = 0;
	while (i < map_data.rows)
	{
		j = 0;
		while (j < map_data.cols)
		{
			matrix[i][j] = map_data.empty;
			j++;
		}
		i++;
	}
	matrix[3][3] = map_data.obstacle;  //prueba
	matrix[4][2] = map_data.obstacle;  //prueba
// crear matriz - hasta aquí --remplazar con open -read etc




	if (argc == 1)
		write(1, "no parameter\n", 13); //hay que pedir una entrada??
		i = 1;
	while (i < argc)
	{
		print_matrix (matrix, &map_data.rows, &map_data.cols);
		write(1, "\n", 1);
		read_matrix (matrix, argv[i]);
		//read matrix // aquí irá lo que hay que traer del archivo de mapa
		prepare_matrix (matrix, &map_data);
		solve_matrix (matrix, &map_data.rows, &map_data.cols, &map_data.max);
		//output_matrix //preparar la que llleva los caracteres válidos
		print_matrix (matrix, &map_data.rows, &map_data.cols);
		write(1, "\n", 1);
		i++;
	}
	free (matrix); //comprobar que está bien liberada
	return (0);
}
