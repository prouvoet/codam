/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/09 15:36:10 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/09 16:16:30 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*new;
	void	*data;

	new = (t_list *)ft_memalloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	if (content == 0)
	{
		new->content = 0;
		new->content_size = 0;
	}
	else
	{
		data = (void *)ft_memalloc(content_size);
		if (data == NULL)
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(data, content, content_size);
		new->content = data;
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
