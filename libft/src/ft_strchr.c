/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:39:03 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/21 13:54:24 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*str_cpy;

	str_cpy = (char *)str;
	while (*str_cpy)
	{
		if (*str_cpy == c)
			return (str_cpy);
		str_cpy++;
	}
	return (NULL);
}
