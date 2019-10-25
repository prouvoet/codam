/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/26 18:18:34 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/03 17:42:37 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*part_2(int n, char *str, int i)
{
	int temp;

	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[i] = '\0';
	i--;
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		temp = n;
		str[i] = temp % 10 + '0';
		n /= 10;
		i--;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int		c;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	c = ft_intlen(n);
	str = ft_strnew(c);
	if (str == NULL)
		return (NULL);
	return (part_2(n, str, c));
}
