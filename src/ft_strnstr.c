/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:06:22 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/23 16:16:10 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    if (!*little)
        return ((char *)big);
    if (len == 0)
        return (NULL);

    for (i = 0; big[i] && i < len; i++)
    {
        if (big[i] == little[0])
        {
            for (j = 0; little[j] && big[i + j] && (i + j) < len; j++)
            {
                if (big[i + j] != little[j])
                    break;
            }
            if (!little[j])
                return (char *)(big + i);
        }
    }
    return (NULL);
}

