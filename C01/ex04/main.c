/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 23:27:06 by gpacheco          #+#    #+#             */
/*   Updated: 2021/07/26 23:45:13 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a;
	int b;

	a = 9;
	b = 2;
	printf("%i dividido por %i", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf(" é igual a %i e sobra %i\n", a, b);
}
