/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 14:06:36 by gpacheco          #+#    #+#             */
/*   Updated: 2021/07/30 14:32:48 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int word_captalize(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 'a'-'A';
	i++;
	while (	(str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z') ||
			(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a'-'A';
		i++;
	}
	return i;
}

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z') ||
			(str[i] >= '0' && str[i] <= '9'))
			i = word_captalize(str, i);
		i++;
	}
	return (str);
}