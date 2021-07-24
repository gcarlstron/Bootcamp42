void	matrix_start(int *matrix)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		matrix[i] = 1;
		i++;
	}
}

int next_matrix(int *matrix, int pos)
{
	if (pos < 16){
		matrix[pos]++;
		if (matrix[pos] > 5)
		{
			matrix[pos] = 1;
				next_matrix(matrix, pos++);
		}
		return 0;
	}
	else
		return 1;
}