/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_entry.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 00:35:55 by arbernar          #+#    #+#             */
/*   Updated: 2021/07/26 14:51:15 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "skyscrapper_puzzle.h"

int	validate_entry(char *str, int *views)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (str[i] != '\0' && j < 16)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			views[j] = str[i] - '0';
			j++;
		}
		else
			if (str[i] != ' ')
				return (1);
		i++;
	}
	if (i != 31 || str[i] != '\0')
		return (1);
	return (0);
}
