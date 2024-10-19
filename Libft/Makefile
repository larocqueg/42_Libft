# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/17 14:40:28 by larocqueg         #+#    #+#              #
#    Updated: 2024/10/19 12:32:51 by larocqueg        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# The name of the lib
NAME = libft.a

# Compiler
CC = cc

# Compiling flags
CFLAGS = -Wall -Wextra -Werror

# Directory paths
SRCS_DIR = .

# Header file
INCLUDES_DIR = ./libft.h \

# Shoing all *c files path
SRCS =	$(SRCS_DIR)/ft_isalpha.c \
		$(SRCS_DIR)/ft_isdigit.c \
		$(SRCS_DIR)/ft_isalnum.c \
		$(SRCS_DIR)/ft_isascii.c \
		$(SRCS_DIR)/ft_isprint.c \
		$(SRCS_DIR)/ft_strlen.c \
		$(SRCS_DIR)/ft_tolower.c \
		$(SRCS_DIR)/ft_toupper.c \
		$(SRCS_DIR)/ft_atoi.c \

# Objects files
OBJS = $(SRCS:.c=.o)

# all rule
all: $(NAME)

# Compile the lib
$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compile the object files
%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean
	make

.PHONY: all clean fclean re
