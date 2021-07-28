/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 23:24:12 by gpacheco          #+#    #+#             */
/*   Updated: 2021/07/28 00:30:04 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	higher;
	int	end;

	i = 0;
	higher = 0;
	size = size - 1;
	end = size;
	while (i < size)
	{
		j = 0;
		while (j <= end)
		{
			if (tab[higher] < tab[j])
				higher = j;
			j++;
		}
		ft_swap(&tab[end], &tab[higher]);
		end--;
		higher = 0;
		i++;
	}
}
