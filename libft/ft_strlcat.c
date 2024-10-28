/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:41:53 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/28 15:49:51 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		len;
	size_t	i;

	i = 0;
	if (size < ft_strlen(dst))
		return (size + ft_strlen(src));
	else
	{
		while (dst[i])
			i++;
		ft_strlcpy(&dst[i], src, size - i);
		len = ft_strlen(src) + i;
		return (len);
	}
}
/*
#include <stdio.h>
#include "ft_strlcpy.c"
#include "ft_strlen.c"
int main()
{
	char dest1[11] = "Hello";
	const char *src1 = "World";
	printf("%zu\n", ft_strlcat(dest1, src1, sizeof(dest1)));
	printf("Result: %s\n", dest1);
	return 0;
}*/
