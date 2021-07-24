/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 17:59:07 by gpacheco          #+#    #+#             */
/*   Updated: 2021/07/24 13:14:25 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	u;
	int	d;
	int	n;

	n = 0;
	if (nb < 0)
	{
		n = 1;
		nb++;
		nb = -nb;
		write(1, "-", 1);
	}
	d = nb / 10;
	if (d < 10 && nb >= 10)
	{
		d = '0' + d;
		write(1, &d, 1);
	}
	else if (d > 0)
		{
		ft_putnbr(d);
		}
	u = '0' + nb % 10 + n;
	write(1, &u, 1);
}
