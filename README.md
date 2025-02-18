# Libft

Libft is a custom implementation of the standard C library functions. It provides useful utilities for handling strings, memory, and lists, essential for coding projects and learning low-level programming concepts.

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Functions](#functions)
- [Testing](#testing)

## Installation

Clone the repository and compile the library:

```sh
git clone https://github.com/larocqueg/42_Libft libft
cd libft
make
```
For the bonus part (everything with linked list)
```sh
make bonus
```

This will generate the `libft.a` static library file.

## Usage

To use `libft` in your project, include the header file and link the library:

```c
#include "libft.h"
```

Compile with:

```sh
cc your_program.c -L. -lft 
```

## Functions

Libft includes custom implementations of various standard C functions, such as:

- **Memory Functions**: `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memcmp`, `ft_bzero`
- **String Functions**: `ft_strlen`, `ft_strcpy`, `ft_strdup`, `ft_strjoin`, `ft_strncmp`
- **Character Checks**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_tolower`, `ft_toupper`
- **Linked List Utilities**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstdelone`

For a full list, check `libft.h`.

## Testing

You can test the library using [Francinette](https://github.com/WaRtr0/francinette-image):

```sh
git clone https://github.com/WaRtr0/francinette-image.git
```
Inside of libft repository
```sh
francinette
```
