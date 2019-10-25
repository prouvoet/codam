/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/08 15:09:00 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/09 16:18:40 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(const char *str, char c)
{
	size_t i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		while (*str == c)
			str++;
		if (*str != '\0')
			i++;
		while (*str != c && *str != '\0')
			str++;
	}
	return (i);
}

static size_t	length(const char *str, char c, int start)
{
	size_t i;

	i = 1;
	while (str[start] != c && str[start] != '\0')
	{
		i++;
		start++;
	}
	return (i);
}

static char		**fend(char **arr, size_t j)
{
	arr[j] = NULL;
	return (arr);
}

char			**ft_strsplit(const char *str, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**arr;

	i = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	arr = (char **)malloc((count(str, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] == '\0')
			return (fend(arr, j));
		arr[j] = ft_strsub(str, i, length(str, c, i) - 1);
		j++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (fend(arr, j));
}
