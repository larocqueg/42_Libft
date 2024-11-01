/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:57:44 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/31 14:22:18 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_words(const char *str, char sep)
{
	int	i;
	int	words;

	if (!str[0])
		return (0);
	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i] != '\0' && str[i] != sep)
			words++;
		while (str[i] != sep && str[i])
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	len;
	int		i;

	dest = (char **)malloc((ft_words(s, c) + 1) * sizeof(char *));
	if (!s || !dest)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			dest[i++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include "ft_strchr.c"
#include "ft_substr.c"
#include "ft_strdup.c"
#include "ft_strlen.c"
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	i = 0;
		int	j = 0;
		char **dest = ft_split(av[1], av[2][0]);
		while (dest[i])
			printf("%s\n", dest[i++]);
		free(dest);
		return (0);
	}
	else if (ac > 3)
		printf("Too many arguments!\n");
	else
		printf("Missing command-line argument!\n");
	return (1);
}*/
