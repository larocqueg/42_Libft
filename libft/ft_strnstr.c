/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:06:22 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/30 11:49:38 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] && big[i + j] && (i + j) < len)
			{
				if (big[i + j] != little[j])
					break ;
				j++;
			}
			if (!little[j])
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
/*
#include "ft_strlen.c"
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s\n", ft_strnstr(av[1], av[2], ft_strlen(av[1])));
		return (0);
	}
	else if (ac > 3)
		printf("Too many arguments!\n");
	else
		printf("Missing command-line argument!\n");
	return (1);
}*/
