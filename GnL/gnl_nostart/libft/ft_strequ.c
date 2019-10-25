/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strequ.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/08 14:09:44 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/08 15:07:02 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *str1, char const *str2)
{
	if (ft_strcmp(str1, str2) == 0)
		return (1);
	return (0);
}
