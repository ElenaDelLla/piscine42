






char **solve_matrix (char **matrix, int *rows, int *cols, int *max)
{
	int	i;
	int	j;
	int n;
	char new_max_value;

	n = 1;
	while (n < *max)
	{
		i = n;
		while (i < *rows)
		{
			j = n;
			while (j < *cols)
			{
				if (matrix[i][j] != '0')
				{
					new_max_value = (n + 1) + '0';
					if (matrix[i-1][j-1] < new_max_value)
						new_max_value = matrix[i-1][j-1];
					if (matrix[i-1][j] < new_max_value)
						new_max_value = matrix[i-1][j];
					if (matrix[i][j-1] < new_max_value)
						new_max_value = matrix[i][j-1];
					matrix[i][j] = new_max_value + 1;
				}
			j++;
			}
			i++;
		}
		n++;
	}
return (matrix);
}