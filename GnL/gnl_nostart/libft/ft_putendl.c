/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/02 16:10:46 by prouvoet      #+#    #+#                 */
/*   Updated: 2019/04/02 16:14:06 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(const char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}
