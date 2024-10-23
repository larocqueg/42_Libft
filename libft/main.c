/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:09:29 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/10/23 17:09:31 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    // Test ft_isalnum
    printf("ft_isalnum('A'): %d\n", ft_isalnum('A'));  // Expected: 1
    printf("ft_isalnum('1'): %d\n", ft_isalnum('1'));  // Expected: 1
    printf("ft_isalnum('!'): %d\n", ft_isalnum('!'));  // Expected: 0

    // Test ft_isalpha
    printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));  // Expected: 1
    printf("ft_isalpha('1'): %d\n", ft_isalpha('1'));  // Expected: 0

    // Test ft_isascii
    printf("ft_isascii(127): %d\n", ft_isascii(127));  // Expected: 1
    printf("ft_isascii(128): %d\n", ft_isascii(128));  // Expected: 0

    // Test ft_isdigit
    printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));  // Expected: 1
    printf("ft_isdigit('A'): %d\n", ft_isdigit('A'));  // Expected: 0

    // Test ft_isprint
    printf("ft_isprint(' '): %d\n", ft_isprint(' '));  // Expected: 1
    printf("ft_isprint('\\t'): %d\n", ft_isprint('\t'));  // Expected: 0

    // Test ft_tolower
    printf("ft_tolower('A'): %c\n", ft_tolower('A'));  // Expected: 'a'
    printf("ft_tolower('a'): %c\n", ft_tolower('a'));  // Expected: 'a'

    // Test ft_toupper
    printf("ft_toupper('a'): %c\n", ft_toupper('a'));  // Expected: 'A'
    printf("ft_toupper('A'): %c\n", ft_toupper('A'));  // Expected: 'A'

    // Test ft_atoi
    printf("ft_atoi('42'): %d\n", ft_atoi("42"));  // Expected: 42
    printf("ft_atoi('-123'): %d\n", ft_atoi("-123"));  // Expected: -123
    printf("ft_atoi('--123'): %d\n", ft_atoi("--123"));  // Expected: 0

    // Test ft_strlen
    const char *str = "Hello, World!";
    printf("ft_strlen('Hello, World!'): %zu\n", ft_strlen(str));  // Expected: 13

    // Test ft_strncmp
    printf("ft_strncmp('abc', 'abc', 3): %d\n", ft_strncmp("abc", "abc", 3));  // Expected: 0
    printf("ft_strncmp('abc', 'abd', 3): %d\n", ft_strncmp("abc", "abd", 3));  // Expected: -1

    // Test ft_memcpy
    char dest[20];
    ft_memcpy(dest, "Copy this", 10);
    printf("ft_memcpy: %s\n", dest);  // Expected: "Copy this"

    // Test ft_bzero
    ft_bzero(dest, 10);
    printf("ft_bzero: '%s'\n", dest);  // Expected: (empty string, zeroed out)

    // Test ft_strchr
    printf("ft_strchr('Hello, World!', 'W'): %s\n", ft_strchr("Hello, World!", 'W'));  
    // Expected: "World!"

    // Test ft_strrchr
    printf("ft_strrchr('Hello, World!', 'o'): %s\n", ft_strrchr("Hello, World!", 'o'));  
    // Expected: "orld!"

    // Test ft_strdup
    char *dup_str = ft_strdup("Duplicate this");
    printf("ft_strdup: %s\n", dup_str);  // Expected: "Duplicate this"
    free(dup_str);  // Remember to free memory!

    // Test ft_calloc
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (arr)
    {
        printf("ft_calloc: ");
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", arr[i]);  // Expected: 0 0 0 0 0
        }
        printf("\n");
        free(arr);  // Free allocated memory
    }

    // Test ft_memchr
    char *mem_str = "Find the character!";
    char *result = ft_memchr(mem_str, 't', 20);
    if (result)
    {
        // Expected: "the character!"
        printf("ft_memchr('Find the character!', 't', 20): %s\n", result);
    }
    else
    {
        printf("Character not found\n");
    }

    // Test ft_memcmp
    printf("ft_memcmp('abc', 'abd', 3): %d\n", ft_memcmp("abc", "abd", 3));
    // Expected: negative value (-1 or -X)

	// Test ft_strnstr
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    char *found = ft_strnstr(haystack, needle, 13);
    if (found)
    {
        printf("ft_strnstr('Hello, World!', 'World', 13): %s\n", found);
        // Expected: "World!"
    }
    else
    {
        printf("Substring not found in the specified length\n");
    }

    return 0;
}

