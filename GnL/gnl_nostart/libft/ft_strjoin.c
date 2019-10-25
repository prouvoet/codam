/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/08 14:32:26 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/10 17:33:24 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	char *new;

	new = ft_strnew(ft_strlen(str1) + ft_strlen(str2));
	if (new == NULL)
		return (NULL);
	ft_strcpy(new, str1);
	ft_strcat(new, str2);
	return (new);
}
