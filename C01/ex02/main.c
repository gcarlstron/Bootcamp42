/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 23:20:58 by gpacheco          #+#    #+#             */
/*   Updated: 2021/07/26 23:24:10 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;
	printf("a = %i\nb = %i\n\n", a, b);
	ft_swap(&a,&b);
	printf("a = %i\nb = %i\n\n", a, b);
}
