# The name of the lib
NAME = libft.a

# Compiler
CC = cc

# Compiling flags
CFLAGS = -Wall -Wextra -Werror

# Directory paths
SRCS_DIR = .
INCLUDES_DIR = .  # Points to the directory containing libft.h

# Source files
SRCS =	$(SRCS_DIR)/ft_atoi.c \
		$(SRCS_DIR)/ft_bzero.c \
		$(SRCS_DIR)/ft_calloc.c \
		$(SRCS_DIR)/ft_isalnum.c \
		$(SRCS_DIR)/ft_isalpha.c \
		$(SRCS_DIR)/ft_isascii.c \
		$(SRCS_DIR)/ft_isdigit.c \
		$(SRCS_DIR)/ft_isprint.c \
		$(SRCS_DIR)/ft_memchr.c \
		$(SRCS_DIR)/ft_memcmp.c \
		$(SRCS_DIR)/ft_memcpy.c \
		$(SRCS_DIR)/ft_memset.c \
		$(SRCS_DIR)/ft_strchr.c \
		$(SRCS_DIR)/ft_strdup.c \
		$(SRCS_DIR)/ft_strlcat.c \
		$(SRCS_DIR)/ft_strlcpy.c \
		$(SRCS_DIR)/ft_strlen.c \
		$(SRCS_DIR)/ft_strnstr.c \
		$(SRCS_DIR)/ft_strncmp.c \
		$(SRCS_DIR)/ft_tolower.c \
		$(SRCS_DIR)/ft_toupper.c \
		$(SRCS_DIR)/ft_strrchr.c \
		$(SRCS_DIR)/ft_substr.c \
		$(SRCS_DIR)/ft_strjoin.c \
		$(SRCS_DIR)/ft_memmove.c \
		$(SRCS_DIR)/ft_strtrim.c \
		$(SRCS_DIR)/ft_putchar_fd.c \
		$(SRCS_DIR)/ft_putstr_fd.c \
		$(SRCS_DIR)/ft_putnbr_fd.c \

# Object files
OBJS = $(SRCS:.c=.o)

# all rule
all: $(NAME)

# Compile the lib
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compile the object files
%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $@

# clean rule removes .o from srcs
clean:
	rm -rf $(OBJS)

# fclean rule runs clean then removes libft.a
fclean: clean 
	rm -rf $(NAME)

# re rule runs fclean then runs make again
re: fclean
	make

# Avoid name clashes
.PHONY: all clean fclean re

