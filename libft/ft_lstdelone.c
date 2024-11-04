/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:42:14 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/11/04 12:13:46 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del((void *)lst->content);
	free(lst);
}

void	del(void *lst)
{
	free(lst);
}
/*
#include "ft_lstnew.c"
#include "ft_strdup.c"
#include "ft_strlen.c"
#include <stdio.h>

int	main(void)
{
	t_list	*node;

	node = ft_lstnew(ft_strdup("42"));
	ft_lstdelone(node, del);
	node = NULL;
	if (node == NULL)
	{
		printf("Node deleted successfully!\n");
	}
	else
	{
		printf("Node deletion failed!\n");
	}
	return (0);
}*/
