/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:09:01 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/11/02 13:11:26 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
#include "ft_lstnew.c"
#include <stdio.h>
int main()
{
    t_list *head = ft_lstnew("1");
    head->next = ft_lstnew("2");
    head->next->next = ft_lstnew("3");
    head->next->next->next = ft_lstnew("4");
    head->next->next->next->next = ft_lstnew("5");

    int size = ft_lstsize(head);
    printf("The size of the list is: %d\n", size);
    while (head)
	{
        t_list *temp = head;
        head = head->next;
        free(temp);
    }
    return (0);
}*/