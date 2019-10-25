/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/09 16:43:15 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/09 17:36:49 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*cur;

	tmp = *alst;
	while (tmp)
	{
		cur = tmp;
		tmp = cur->next;
		ft_lstdelone(&cur, del);
	}
	*alst = NULL;
}
