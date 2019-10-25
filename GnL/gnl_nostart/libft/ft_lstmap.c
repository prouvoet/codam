/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/10 13:48:24 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/10 14:40:12 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*nxt;
	t_list	*tmp;
	t_list	*start;

	start = f(lst);
	if (start == NULL)
		return (NULL);
	lst = lst->next;
	tmp = start;
	while (lst)
	{
		nxt = f(lst);
		if (!nxt)
			return (NULL);
		tmp->next = nxt;
		tmp = nxt;
		lst = lst->next;
	}
	return (start);
}
