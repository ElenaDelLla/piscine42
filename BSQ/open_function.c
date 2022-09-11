/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eledelga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:40:33 by eledelga          #+#    #+#             */
/*   Updated: 2022/07/26 16:51:39 by eledelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h> 
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


char **read_matrix (char **matrix, char *argv) //quizás añadir un array para parámetros
{
	
	int		src_map;
	char	*buffer;
	int		i;
	int		size;
	char	*map_string;

	src_map = open(argv, O_RDONLY);
	if (src_map == -1)
	{
		write(1, "Error when opening the file\n", 28);
		return (0);
	}
	size = 0;
	buffer = malloc(2048);
	size = (read(src_map, buffer, 2048));
	while (read(src_map, buffer, 1) != '\0')
		size++;
	map_string = malloc((size + 1) * sizeof(char));
	i = 0;
	while (i < size)
	{		
		map_string[i] = buffer[i];
		i++;
	}
	map_string[i] = '\0';
	free (buffer);




	
	//free (map_string) //aquí o en donde lo dejemos de usar para crear la matriz
	return (matrix);
}

