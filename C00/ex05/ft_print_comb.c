#include <unistd.h>

void	myprint(char x, char y, char z);

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				myprint(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

void	myprint(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x < 7)
		write(1, ", ", 2);
}
