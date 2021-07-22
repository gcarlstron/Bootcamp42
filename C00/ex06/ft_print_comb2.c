#include <unistd.h>

void	myprint(int n1, int n2)
{
	char	n[5];

	n[0] = '0' + n1 / 10;
	n[1] = '0' + n1 % 10;
	n[2] = ' ';
	n[3] = '0' + n2 / 10;
	n[4] = '0' + n2 % 10;
	write (1, &n, sizeof(n));
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			myprint(n1, n2);
			if (n1 < 98)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}
