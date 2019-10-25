/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/09 14:22:07 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/09 15:04:38 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *str, char (*f)(char))
{
	char	*new;
	int		i;

	i = 0;
	new = ft_strdup(str);
	if (new == NULL)
		return (NULL);
	while (new[i] != '\0')
	{
		new[i] = f(str[i]);
		i++;
	}
	return (new);
}
