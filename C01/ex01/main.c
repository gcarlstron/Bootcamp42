/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 23:04:51 by gpacheco          #+#    #+#             */
/*   Updated: 2021/07/27 13:20:21 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	n1;
	int	*n2;
	int	**n3;
	int	***n4;
	int	****n5;
	int	*****n6;
	int	******n7;
	int	*******n8;
	int	********n9;

	n1 = 0;
	n2 = &n1;
	n3 = &n2;
	n4 = &n3;
	n5 = &n4;
	n6 = &n5;
	n7 = &n6;
	n8 = &n7;
	n9 = &n8;
	printf("n = %i\n", n1);
	ft_ultimate_ft(&n9);
	printf("n = %i\n", n1);
}
