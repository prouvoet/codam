/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/03 22:02:58 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/03 22:08:30 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *tmp;

	tmp = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			tmp = (char*)s;
		s++;
	}
	if (*s == c)
		tmp = (char*)s;
	return (tmp);
}
