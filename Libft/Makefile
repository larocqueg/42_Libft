# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/17 14:40:28 by larocqueg         #+#    #+#              #
#    Updated: 2024/10/17 16:39:08 by larocqueg        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# The name of the lib
NAME = libft.a

# Compiler
CC = cc

# Compiling flags
CFLAGS = -Wall -Wextra -Werror

# Directory paths
SRCS_DIR = srcs

SRCS =	$(SRCS_DIR)/ft_isalpha.c \
		$(SRCS_DIR)/ft_isdigit.c \
		$(SRCS_DIR)/ft_isalnum.c \
		$(SRCS_DIR)/ft_isascii.c \
		$(SRCS_DIR)/ft_isprint.c \
		$(SRCS_DIR)/ft_strlen.c \
		$(SRCS_DIR)/ft_memset.c \
		$(SRCS_DIR)/ft_bzero.c \
		$(SRCS_DIR)/ft_memcpy.c \
		$(SRCS_DIR)/ft_memmove.c \
		$(SRCS_DIR)/ft_strlcpy.c \
		$(SRCS_DIR)/ft_strlcat.c \
		$(SRCS_DIR)/ft_toupper.c \
		$(SRCS_DIR)/ft_tolower.c \
		$(SRCS_DIR)/ft_strchr.c \
		$(SRCS_DIR)/ft_strrchr.c \
		$(SRCS_DIR)/ft_strncmp.c \
		$(SRCS_DIR)/ft_memchr.c \
		$(SRCS_DIR)/ft_memcmp.c \
		$(SRCS_DIR)/ft_strnstr.c \
		$(SRCS_DIR)/ft_atoi.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	chmod +x $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean
	make

.PHONY: all clean fclean re
