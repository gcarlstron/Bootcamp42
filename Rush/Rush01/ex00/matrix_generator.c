#include <stdio.h>

void	matrix_start(int *matrix)
{
	matrix[0] = 1;
	matrix[1] = 2;
	matrix[2] = 3;
	matrix[3] = 4;
	matrix[4] = 2;
	matrix[5] = 1;
	matrix[6] = 4;
	matrix[7] = 3;
	matrix[8] = 3;
	matrix[9] = 4;
	matrix[10] = 1;
	matrix[11] = 2;
	matrix[12] = 4;
	matrix[13] = 3;
	matrix[14] = 2;
	matrix[15] = 1;
}

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

/*
int main (void) {
	int matrix[4];
	int end[0];

	end[0] = 0;
	matrix_start(matrix);
	for(int i=0;i < 16; i++)
	{
		printf("%i ", matrix[i]);
	}
	printf("\n");
	while(1)
	{
		next_matrix(matrix, 0, end);
		for(int i=0;i < 16; i++)
		{
			printf("%i ", matrix[i]);
		}
		printf("\n");
		if(end[0] == 1)
		{
			printf(" (%i)\n", end[0]);
			return 0;
		}
	}	
}
*/