/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:55:27 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/21 12:55:34 by gde-la-r         ###   ########.fr       */
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
