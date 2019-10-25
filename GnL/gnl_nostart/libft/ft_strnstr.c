/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/04 06:04:23 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/04 06:33:06 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	tmp;
	char	*start;

	tmp = 0;
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		start = (char *)needle;
		i = tmp;
		while (haystack[i] == *start && haystack[i] && *start && i < n)
		{
			i++;
			start++;
			if (*start == '\0')
				return (&((char *)haystack)[tmp]);
		}
		tmp++;
	}
	return (NULL);
}
