/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 05:05:49 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/04 05:45:03 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*tmp;
	char	*start;
	char	*hay;

	if (needle[0] == '\0')
		return ((char *)haystack);
	hay = (char *)haystack;
	while (*hay)
	{
		start = (char *)needle;
		tmp = hay;
		while (*tmp == *start && *tmp && *start)
		{
			tmp++;
			start++;
			if (*start == '\0')
				return (hay);
		}
		hay++;
	}
	return (NULL);
}
