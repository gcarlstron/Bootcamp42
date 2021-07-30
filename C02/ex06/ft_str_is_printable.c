/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 21:46:18 by gpacheco          #+#    #+#             */
/*   Updated: 2021/07/29 21:48:06 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	printable;
	
	printable = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '!' && str[i] <= '~')
			printable++;
		i++;
	}
	if (printable == i)
		return (1);
	return(0);
}