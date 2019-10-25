/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/09 15:05:32 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/09 15:06:49 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	new = ft_strdup(str);
	if (new == NULL)
		return (NULL);
	while (new[i] != '\0')
	{
		new[i] = f(i, str[i]);
		i++;
	}
	return (new);
}
