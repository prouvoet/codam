/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 13:34:20 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/02 18:29:41 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t lg)
{
	size_t i;

	i = 0;
	while (i < lg && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < lg)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
