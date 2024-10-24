/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:16:13 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/24 12:30:47 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*src_chr;
	char	*dest_chr;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	src_chr = (char *)src;
	dest_chr = (char *)dest;
	if (dest_chr > src_chr)
	{
		while (len-- > 0)
			dest_chr[len] = src_chr[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest_chr[i] = src_chr[i];
			i++;
		}
	}
	return (dest);
}
