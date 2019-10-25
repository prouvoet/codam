/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnequ.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/08 14:12:55 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/08 15:07:10 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *str1, char const *str2, size_t n)
{
	if (ft_strncmp(str1, str2, n) == 0)
		return (1);
	return (0);
}
