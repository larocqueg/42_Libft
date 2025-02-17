Libft - 42 Project
Libft is a personal library created as part of the 42 School curriculum. This repository contains a collection of useful functions that are used across several 42 projects. It implements functions that are commonly used in C programming but are not part of the C standard library.

This version includes both the main set of functions and the bonus functions required for the project.

Table of Contents
Description
Functions
Bonus
Compilation
Usage
Tests
License
Description
Libft is a custom library designed to provide implementations for standard C functions. It is an essential project at the beginning of the 42 curriculum and helps reinforce important concepts such as pointers, memory management, and string manipulation.

Functions Included
Memory management: malloc, free, etc.
String manipulation: strlen, strcpy, strcmp, etc.
Character classification: isdigit, isalpha, isascii, etc.
Conversion: atoi, itoa, etc.
Linked list functions
Other utility functions
Bonus Functions
In addition to the basic set of functions, this repository also includes the bonus functions. These functions extend the libft library's capabilities and demonstrate additional challenges. Some of the bonus functions might include:

ft_lstmap: Applies a function to each element of a linked list.
ft_lstiter: Iterates over a linked list and applies a function to each element.
Functions
Below are some of the key functions implemented in this repository:

ft_strlen: Returns the length of a string.
ft_strdup: Duplicates a string.
ft_memset: Fills a block of memory with a specific value.
ft_atoi: Converts a string to an integer.
ft_isdigit: Checks if a character is a digit.
ft_lstadd_back: Adds an element to the end of a linked list.
(Add any additional functions you've implemented or want to highlight)
Bonus Functions
ft_lstmap: Maps a function onto each element of a linked list.
ft_lstiter: Iterates over each element of a linked list and applies a function to it.
Compilation
To compile the libft library, simply run the following command in the root directory of this repository:

bash
Copiar
make
This will compile the library and create the libft.a archive.

To clean up object files, you can run:

bash
Copiar
make clean
To remove both object files and the library, use:

bash
Copiar
make fclean
And to recompile everything, including the clean-up, use:

bash
Copiar
make re
Usage
Once the library is compiled, you can link it to your C programs by including the libft.h header and adding the libft.a to your linking command. For example:

bash
Copiar
gcc -o my_program my_program.c -L. -lft
Tests
To ensure the library functions correctly, it’s important to test each function. If you want to add your own tests, feel free to create a test directory and include any test cases you may have written.

License
This project is licensed under the MIT License - see the LICENSE file for details.

Let me know if you'd like to make any adjustments to the structure or add specific details!
