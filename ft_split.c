/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:57:44 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/30 13:41:08 by gde-la-r         ###   ########.fr       */
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
	dest[i] = NULL;
	return (dest);
}
