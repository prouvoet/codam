/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/02 16:16:53 by prouvoet      #+#    #+#                 */
/*   Updated: 2019/04/02 16:18:55 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	lg;

	lg = 0;
	while (str[lg] != '\0')
		lg++;
	return (lg);
}
