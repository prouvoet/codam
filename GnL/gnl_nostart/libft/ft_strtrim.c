/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/08 14:50:32 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/08 15:07:19 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (ft_issspace(str[j]) == 1)
		j++;
	while (str[j] != '\0')
	{
		j++;
		i++;
	}
	j--;
	if (i == 0)
		return (ft_strnew(1));
	while (ft_issspace(str[j]) == 1)
	{
		j--;
		i--;
	}
	return (ft_strsub(str, (unsigned int)(j - i + 1), i));
}
