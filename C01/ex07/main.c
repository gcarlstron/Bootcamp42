/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 18:03:55 by gpacheco          #+#    #+#             */
/*   Updated: 2021/07/28 00:43:51 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	fill_tab(int *tab, int start, int end)
{
	int	i;

	i = 0;
	while (start <= end)
	{
		tab[i] = start;
		start++;
		i++;
	}
}

void	print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%i ", tab1[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	tab1[8];
	int	tab2[9];
	int	i;

	fill_tab(tab1, 1, 8);
	fill_tab(tab2, 1, 9);
	print_tab(tab1, 8);
	ft_rev_int_tab(tab1, 8);
	print_tab(tab1, 8);
	printf("\n");
	print_tab(tab2, 9);
	ft_rev_int_tab(tab2, 9);
	print_tab(tab2, 9);
}
