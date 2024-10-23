# The name of the lib
NAME = libft.a

# Compiler
CC = cc

# Compiling flags
CFLAGS = -Wall -Wextra -Werror

# Directory paths
SRCS_DIR = src
MAIN_DIR = .
INCLUDES_DIR = includes

# Showing all *c files path for src
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
		$(SRCS_DIR)/ft_memmove.c \
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
		$(SRCS_DIR)/ft_strrchr.c

# Main source file and object file
MAIN_SRC = $(MAIN_DIR)/main.c
MAIN_OBJ = $(MAIN_SRC:.c=.o)

# Object files
OBJS = $(SRCS:.c=.o)

# all rule
all: $(NAME)

# Compile the lib
$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compile the object files
%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $@

# Main compiling rule (can be moved into 'test' if only for testing)
main: $(MAIN_OBJ) $(NAME)
	$(CC) $(CFLAGS) -I $(INCLUDES_DIR) $(MAIN_OBJ) -o main $(NAME)

# Test rule
test: main
	./main

# clean rule removes .o from srcs
clean:
	rm -rf $(OBJS) $(MAIN_OBJ)

# fclean rule runs clean then removes libft.a
fclean: clean 
	rm -rf $(NAME) main

# re rule runs fclean then runs make again
re: fclean
	make

# Avoid name clashes
.PHONY: all clean fclean re

