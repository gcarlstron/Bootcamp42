#include <unistd.h>
#include "skyscrapper_puzzle.h"

void	next_matrix(int *matrix, int pos, int *end)
{
	if (pos < 16)
	{
		matrix[pos]++;
		if (matrix[pos] >= 5)
		{
			matrix[pos] = 1;
			next_matrix(matrix, ++pos, end);
		}
	}
	else
		end[0] = 1;
}

void	matrix_solver(int *matrix, int *views)
{
	int	end;
	int	ok;

	end = 0;
	matrix_start(matrix);
	while (end == 0)
	{
		ok = validate_matrix(matrix, views);
		if (ok == 0)
		{
			print_matrix(matrix);
			end = 1;
		}
		next_matrix(matrix, 0, &end);
	}
}

int	validate_matrix(int *matrix, int *views)
{
	int	res;

	res = 0;
	res += validate_row(matrix, 0);
	res += validate_row(matrix, 1);
	res += validate_row(matrix, 2);
	res += validate_row(matrix, 3);
	if (res == 0)
	{
		if (validate_column(matrix))
		{
			if (validate_view(matrix, views))
			{
				return (0);
			}
		}
	}
	return (1);
}

int	validate_row(int *matrix, int i)
{
	int	n;
	int	n2;
	int	aux;

	n = 0;
	while (n < 4)
	{
		aux = matrix[n + 4 * i];
		n2 = n + 1;
		while (n2 < 4)
		{
			if (aux == matrix[n2 + 4 * i])
				return (1);
			n2++;
		}
		n++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	matrix[16];
	int	views[16];
	int	entry;

	if (argc == 2)
	{
		entry = validate_entry(argv[1], views);
		if (entry == 0){

		}
		matrix_start(matrix);
		matrix_solver(matrix, views);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}

//comando para iniciar: ./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"