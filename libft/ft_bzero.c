/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:56:26 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/23 11:56:27 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
/*
#include <stddef.h>
#include <unistd.h>
int	main(int ac, char **av)
{
	void	*s;
	size_t	n;
	int		i;

	if (ac == 2)
	{
		n = ft_strlen(av[1]) / 2;
		s = (void *)av[1];
		ft_bzero(s, n);
		i = 0;
		while (av[1][i++] == 0)
			write(1, ". ", 2);
		i--;
		while (av[1][i])
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}*/
