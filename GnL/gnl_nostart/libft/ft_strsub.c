/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsub.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/08 14:19:49 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/08 14:29:38 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *str, unsigned int start, size_t lg)
{
	char	*new;
	size_t	i;

	i = 0;
	new = ft_strnew(lg);
	if (new == NULL)
		return (NULL);
	while (i < lg)
	{
		new[i] = str[start];
		i++;
		start++;
	}
	return (new);
}
