/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 00:12:15 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/04 02:24:44 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)src)[i] == (unsigned char)c)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
			return (&((unsigned char *)dst)[i]);
		}
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (NULL);
}
