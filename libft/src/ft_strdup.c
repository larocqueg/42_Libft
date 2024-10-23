/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:57:53 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/21 12:57:55 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	size_t	i;
	size_t	len;
	char	*dup;

	if (!src)
		return (NULL);
	len = 0;
	len = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(int ac, char *av[])
{
	char *dup = NULL;

	if (ac == 2)
	{
		dup = ft_strdup(av[1]);
		if (dup != NULL)
		{
			printf("duplicated string is: %s", dup);
			free(dup);
		}
		else
			printf("Memory allocation failed!");
	}
	else
			printf("Missin command line argument!");
	printf("\n");
	return (0);
}*/
