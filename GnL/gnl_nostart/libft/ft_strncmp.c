/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/02 18:11:46 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/10 14:49:53 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && i < n && str1[i] && str2[i])
	{
		i++;
		if (i == n)
			return ((unsigned char)str1[i - 1] - (unsigned char)str2[i - 1]);
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
