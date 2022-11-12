/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabr <ysabr@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:41:29 by ysabr             #+#    #+#             */
/*   Updated: 2022/11/03 22:06:02 by ysabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*ptr;

	newnode = NULL;
	while (lst)
	{
		ptr = ft_lstnew(f(lst->content));
		ft_lstadd_back(&newnode, ptr);
		if (!ptr)
		{
			ft_lstclear(&newnode, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (newnode);
}
