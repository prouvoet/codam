/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/02 16:54:29 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/03 17:48:43 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(int n)
{
	size_t c;

	c = 1;
	if (n < 0)
		c = 2;
	while (n > 9 || n < -9)
	{
		n /= 10;
		c++;
	}
	return (c);
}
