/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:06:41 by larocqueg         #+#    #+#             */
/*   Updated: 2024/10/19 12:26:20 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	sign;

	sign = 1;
	if (!str)
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if ((*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign = -sign;
		str++;
		if (*(str + 1) == '-' || *(str + 1) == '+')
			return (0);
	}
	n = 0;
	while (ft_isdigit(*str))
		n = n * 10 + (*str++ - '0');
	return (n * sign);
}
