/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/03 18:06:08 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/03 19:11:29 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	char *tmp;

	tmp = str1;
	while (*str1 != '\0')
		str1++;
	while (*str2 && n > 0)
	{
		*str1 = *str2;
		str1++;
		str2++;
		n--;
	}
	*str1 = '\0';
	return (tmp);
}
