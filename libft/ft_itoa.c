/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:37:52 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/29 12:32:10 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_completestr(int n, size_t len, size_t neg)
{
	str = (char *)malloc(sizeof(char) * (len + neg + 1));
	if (!str)
		return (NULL);
	if (neg == 1)
		str[0] = '-';
	str[len + neg] = '\0';
	len--;
	while (n >= 10)
	{
		str[len + neg] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	str[len + neg] = n + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	neg;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = 0;
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	len = ft_numlen(n);
	return (ft_completestr(n, len, neg));
}
