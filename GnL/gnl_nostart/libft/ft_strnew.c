/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/02 16:34:58 by prouvoet      #+#    #+#                 */
/*   Updated: 2019/04/02 16:48:57 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *dst;

	dst = (char *)ft_memalloc(size + 1);
	return (dst);
}
