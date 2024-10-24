/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:02:10 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/23 15:18:23 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*dest;
	size_t				i;

	dest = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (dest[i] == (unsigned char)c)
			return ((void *)(dest + i));
		i++;
	}
	return (NULL);
}
