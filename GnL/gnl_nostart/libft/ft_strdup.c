/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/02 16:59:57 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/04 02:55:40 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	lg;
	char	*dup;

	lg = ft_strlen(str);
	dup = ft_strnew(lg);
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, str);
	return (dup);
}
