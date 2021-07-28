/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:11:07 by gpacheco          #+#    #+#             */
/*   Updated: 2021/07/27 23:13:29 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	c;
	int		count;

	count = 0;
	c = 'a';
	while (c != '\0')
	{
		c = *str;
		str++;
		count++;
	}
	return (count - 1);
}
