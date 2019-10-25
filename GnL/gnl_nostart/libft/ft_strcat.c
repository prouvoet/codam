/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/03 17:58:26 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/03 18:14:15 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	char *tmp;

	tmp = str1;
	while (*str1 != '\0')
		str1++;
	ft_strcpy(str1, str2);
	return (tmp);
}
