/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:26:47 by larocqueg         #+#    #+#             */
/*   Updated: 2024/10/22 14:29:36 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <math.h>
# include <limits.h>

int		ft_isalnum(int i);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
int		ft_strchr(int i);
size_t	ft_strlen(const char *s);
int		ft_tolower(int i);
int		ft_toupper(int i);
int		ft_atoi(const char *str);
char	*ft_strdup(char *str);
void	*ft_memcpy(unsigned char *dest, unsigned char *src, size_t n);
void	*memmove(void *dest, const void *src, size_t n);

#endif