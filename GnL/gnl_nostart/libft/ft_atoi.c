/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/03 20:49:38 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/10 17:41:24 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comp(long res, char c)
{
	char r;

	r = res % 10 + '0';
	if (r == c)
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	long		res;
	int			neg;

	res = 0;
	neg = 1;
	while (*str && ft_isspace(*str) == 1)
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		if (comp(res, *str) == 0)
		{
			if (neg == 1)
				return (-1);
			return (0);
		}
		str++;
	}
	return ((int)(res * neg));
}
