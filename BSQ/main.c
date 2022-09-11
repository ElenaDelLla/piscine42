/* ************************************************************************** */º
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmontes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:19:47 by lmontes-          #+#    #+#             */
/*   Updated: 2022/07/25 16:19:49 by lmontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"



char	read_map_file(char *nom_arch_mapa) //,char **matrix)
{
	int		src_map; //comprueba que el archivo del mapa abre correctamente y lo referencia
	int 	map_bytes; // para contar el tamaño del archivo del mapa
	char 	*map_buffer; //buffer del contenido del mapa
	char	*map_string;
	int		i;

	printf("Voy a abrir el mapa"); //borrar

	src_map = open(nom_arch_mapa, O_RDONLY); //abrimos el diccionario: da el nombre y el modo
	if (src_map == -1) //si da -1, ha habido error de lectura del fichero
	{
		write(1, "map error no abre\n", 40);
		return (0);
	}
	map_bytes =0; //contar el tamaño total del fichero que vamos a leer
	while (read(src_map, map_buffer, 1) >0)
	map_bytes++;
	if (map_bytes <= 0) //si da 0, archivo del mapa está vacío o errores
	{
		write(1, "map error vacío\n", 40);
		return (0);
	}

	map_string = malloc(sizeof (char) * map_bytes);
	i = 0;
	while (i < map_bytes)
	{
	map_string[i] = map_buffer[i];
	i++;
	}
	printf("%s", map_string);



	close(src_map);
	return (0); //**matrix); //queremos que devuelva la matriz poblada
}




int	main (int argc, char **argv)
{

	int		rows;
	int		cols;
	char	**matrix;


// hacer función para leer el mapa y extraer parámetos y crear matrix

	printf("Voy a abrir el mapa"); //borrar

read_map_file("example_file"); //, matrix); // cambiar por el argumento argv[i]]


// fin leer y crear matrix

/*

	i = 1;
	while (i < argc)
	{
		read_map_file(argv[i], matrix, i);
		solve_puzzle(matrix, parámetros de caracteres); //probablemente mejor llamar desde read_map_file
		print_matrix(**matrix, rows, cols);
		i++;
	}
	return (0);

*/
}