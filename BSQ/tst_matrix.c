#include <unistd.h>
#include <stdlib.h>


void	create_matrix(char *m[], int rows, int cols)
{
	int	i;
	int	j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			m[i][j] = '0';
			j++;
		}
		i++;
	}
}
void	print_matrix(char **matrix, int rows, int cols)

{
	int	i;
	int	j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			write(1, &(matrix[i][j]), 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}



int	main (int argc, char **argv)
{

	int		rows = 5;
	int		cols = 5;
	char	matrix[5][5];
	int	i;
	int	j;

//	*matrix = malloc (sizeof (int*) * cols);
//	matrix = malloc (sizeof (int*) * rows);

i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			matrix[i][j] = '0';
			j++;
		}
		i++;
	}

	//create_matrix(matrix, rows, cols);
	print_matrix(&(matrix), rows, cols);

/*
i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			write(1, &(matrix[i][j]), 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
*/
}