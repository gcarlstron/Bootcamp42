#include <unistd.h>
#include "skyscrapper_puzzle.h"

int	validate_row(int *matrix, int i);
int	validate_colum(int *matrix, int i);

int	validate_matrix(int *matrix)
{
	int	res;

	res = 0;
	res += validate_row(matrix, 0);
	res += validate_row(matrix, 1);
	res += validate_row(matrix, 2);
	res += validate_row(matrix, 3);
	if (res == 0)
	{
		res += validate_colum(matrix, 0);
		res += validate_colum(matrix, 1);
		res += validate_colum(matrix, 2);
		res += validate_colum(matrix, 3);
	}
	if (res == 0)
	{
		res += validate_view(matrix, 0);
		res += validate_view(matrix, 1);
		res += validate_view(matrix, 2);
		res += validate_view(matrix, 3);
	}
	return (res);
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

int	validate_colum(int *matrix, int i)
{
	int	n;
	int	n2;
	int	invert[16];
	int	aux;

	n = 0;
	while (n < 4)
	{
		n2 = 0;
		while (n2 < 4)
		{
			invert[4 * n + n2] = matrix[n + 4 * n2];
			n2 += 1;
		}
		n++;
	}
	aux = validate_row(invert, i);
	return (aux);
}
