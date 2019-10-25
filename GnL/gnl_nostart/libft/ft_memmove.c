/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 03:01:38 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/04 05:53:45 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	while (n > 0)
	{
		n--;
		((char *)dst)[n] = ((char *)src)[n];
	}
	return (dst);
}
