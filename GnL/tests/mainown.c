/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/16 14:59:01 by prouvoet       #+#    #+#                */
/*   Updated: 2019/06/04 14:13:18 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	char	*pt;
	int		fd;
    int     arg[20];
    int i = 1;
    int ret = 1;

	pt = ft_strnew(0);
	if (argc < 2)
		return (0);
	while (argv[i])
    {
        fd = open(argv[i], O_RDONLY);
        arg[i - 1] = fd;
        i++;
    }
	i = 1;
    while (ret != 0)
    {
		while (argv[i])
		{
       		ret = get_next_line(arg[i - 1], &pt);
			if (ret != 0)
			{
			printf("File: %d	<%s>\n", i, pt);
			free(pt);
			i++;
			}
			else
				return (0);
		}
		i = 1;
/*        ret = get_next_line(arg[1], &pt);
        printf("line = %s\n", pt);
		ret = get_next_line(arg[2], &pt);
        printf("line = %s\n", pt);
*/	}
	return (0);
}
