/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:57:11 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/21 16:14:55 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_cpy;
	unsigned char	*dest_cpy;

	if (n == 0 || src == dest)
		return (dest);
	src_cpy = (unsigned char *)src;
	dest_cpy = (unsigned char *)dest;
	if (!src || !dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest_cpy[i] = src_cpy[i];
		i++;
	}
	dest = (void *)dest_cpy;
	return (dest);
}
/*
#include <stdio.h>
#include <stddef.h>
int main()
{
    char source[] = "Hello, World!";
    char destination[20];

    ft_memcpy(destination, source, 12);  // Copies 13 bytes (including '\0')

    printf("%s\n", destination);  // Output: Hello, World!

    return 0;
}
*/
