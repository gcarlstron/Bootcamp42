void	ft_putchar(char c);

void rush(int x, int y)
{
	int contX;
	int contY;

	contY = 0;
	while (contY < y)
	{
		contX = 0;
		while(contX < x)
		{
			if((contX == 0 && contY == 0) || (contX == x-1 && contY == 0))
			{
				ft_putchar('A');
			}
			else if((contX == 0 && contY == y-1) || (contX == x-1 && contY == y-1))
			{
				ft_putchar('C');
			}
			else if(contX == 0 || contX == x-1 || contY == 0 || contY == y-1)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			contX++;
		}
		ft_putchar('\n');
		contY++;
	}
}



/*
	1	2	3	4	5
1	A	B	B	B	A
2	B				B
3	B				B
4	B				B
5	B				B
6	B				B
7	C	B	B	B	C

*/