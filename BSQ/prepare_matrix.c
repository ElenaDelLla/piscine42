#include "t_mapdata.h"

char **prepare_matrix (char **matrix, t_mapdata *map_data)
{
	int	i;
	int	j;

	i = 0;
	while (i < map_data->rows)
	{
		j = 0;
		while (j < map_data->cols)
		{
			if (matrix[i][j] == map_data->obstacle)
				matrix[i][j] = '0';
			if (matrix[0][j] == map_data->empty)
				matrix[0][j] = '1';
			if (matrix[i][0] == map_data->empty)
				matrix[i][0] = '1';
			j++;
		}
		i++;
	}
return (matrix);
}