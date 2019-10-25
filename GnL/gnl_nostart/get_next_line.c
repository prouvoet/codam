/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/16 15:05:05 by prouvoet       #+#    #+#                */
/*   Updated: 2019/10/06 13:53:44 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*copy_buffer_to_str(char *buff, char *str, int lg)
{
	char	*tmp;

	tmp = NULL;
	if (*buff == '\n')
		buff++;
	if (str == NULL)
		tmp = ft_strsub(buff, 0, lg);
	else
	{
		tmp = ft_strnew(lg + ft_strlen(str));
		tmp = ft_strcpy(tmp, str);
		free(str);
		tmp = ft_strncat(tmp, buff, lg);
	}
	return (tmp);
}

char	*check_write(char *buff, char *str, const int fd, int size)
{
	char	*tmp;

	tmp = ft_strchr(buff, '\n');
	if (tmp != NULL)
		return (copy_buffer_to_str(buff, str, (tmp - buff)));
	if (size != BUFF_SIZE && size != 0)
		return (copy_buffer_to_str(buff, str, size));
	tmp = copy_buffer_to_str(buff, str, ft_strlen(buff));
	ft_bzero(buff, BUFF_SIZE);
	size = read(fd, buff, BUFF_SIZE);
	if (*buff == '\n' || size == 0)
		return (tmp);
	return (check_write(buff, tmp, fd, size));
}

void	move_till_next_line(char *buff)
{
	char	*tmp;

	tmp = ft_strchr(buff, '\n');
	if (tmp != NULL)
	{
		ft_memmove(buff, tmp, ft_strlen(tmp) + 1);
		if (buff[0] == '\n')
			ft_memmove(buff, &(buff[1]), BUFF_SIZE);
	}
	else
		buff[0] = '\0';
}

int		get_next_line(const int fd, char **line)
{
	static char		buff[1000][BUFF_SIZE + 1];
	char			*str;
	int				size;

	size = 0;
	str = NULL;
	if (fd < 0 || line == NULL || BUFF_SIZE <= 0 || read(fd, NULL, 0) == -1)
		return (-1);
	if (*(buff[fd]) == '\0')
	{
		ft_bzero(buff[fd], BUFF_SIZE);
		size = read(fd, buff[fd], BUFF_SIZE);
		if (size == 0)
			return (0);
		if (size < 0)
			return (-1);
	}
	*line = check_write(buff[fd], str, fd, size);
	move_till_next_line(buff[fd]);
	return (1);
}
