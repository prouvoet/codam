/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/03 18:33:18 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/10 17:04:50 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t j;
	size_t tmp;

	i = 0;
	j = ft_strlen(src);
	if (n == 0)
		return (ft_strlen(dst));
	while (dst[i] && i < n)
		i++;
	tmp = i;
	while (*src && i < n - 1)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	if (tmp != n)
		dst[i] = '\0';
	return (tmp + j);
}
