/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:38:02 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/11/04 14:48:08 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstcreate(t_list *list, void *(*f)(void *),
					void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*head;

	new_l = ft_lstcreate(lst, f, del);
	if (!new_l)
		return (NULL);
	head = new_l;
	lst = lst->next;
	while (lst)
	{
		new_l->next = ft_lstnew(f(lst->content));
		if (!new_l->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_l = new_l->next;
		lst = lst->next;
	}
	new_l->next = NULL;
	return (head);
}

static t_list	*ft_lstcreate(t_list *list, void *(*f)(void *),
	void (*del)(void *))
{
	t_list	*new_l;
	void	*content;

	if (!list || !f || !del)
		return (NULL);
	content = f(list->content);
	new_l = ft_lstnew(content);
	if (!new_l)
	{
		del(content);
		return (NULL);
	}
	return (new_l);
}
