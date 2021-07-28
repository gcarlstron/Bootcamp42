/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 23:30:24 by gpacheco          #+#    #+#             */
/*   Updated: 2021/07/28 00:30:36 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[10] = {12, 3, 5, 120, 9, 27, 67, 52, 5, 1};
	int	i;

	i = 0;
	while (i < 10)
	{
		printf("%i ", tab[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_sort_int_tab(tab, 10);
	while (i < 10)
	{
		printf("%i ", tab[i]);
		i++;
	}
	printf("\n");
}
