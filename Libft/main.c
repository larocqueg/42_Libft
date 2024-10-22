#include "libft.h"

int main()
{
   //printf("ft_isalnum('A'): %d\n", ft_isalnum('A'));
    //printf("ft_isalnum('1'): %d\n", ft_isalnum('1'));
    //printf("ft_isalnum('@'): %d\n", ft_isalnum('@'));

    //printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
    //printf("ft_isalpha('1'): %d\n", ft_isalpha('1'));

    //printf("ft_isascii(65): %d\n", ft_isascii(65));
    //printf("ft_isascii(200): %d\n", ft_isascii(200));

    //printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
    //printf("ft_isdigit('A'): %d\n", ft_isdigit('A'));

    //printf("ft_isprint('A'): %d\n", ft_isprint('A'));
    //printf("ft_isprint(10): %d\n", ft_isprint(10));

    //printf("ft_strlen(\"Hello\"): %zu\n", ft_strlen("Hello"));

    //printf("ft_tolower('A'): %d ('%c')\n", ft_tolower('A'), ft_tolower('A'));

    //printf("ft_toupper('a'): %d ('%c')\n", ft_toupper('a'), ft_toupper('a'));

	printf("ft_atoi(-123) = %d\n", ft_atoi("-123"));
	printf("ft_atoi(--123) = %d\n", ft_atoi("--123"));
	printf("ft_atoi(-+123) = %d\n", ft_atoi("-+123"));
	printf("ft_atoi(++123) = %d\n", ft_atoi("++123"));
	printf("ft_atoi(2147483647) = %d\n", ft_atoi("2147483647"));
	printf("ft_atoi(-2147483648) = %d\n", ft_atoi("-2147483648"));
	

    //char *str_dup = ft_strdup("Hello");
    //printf("ft_strdup(\"Hello\"): %s\n", str_dup);
    //free(str_dup);

    //unsigned char src1[] = "abcdef";
    //unsigned char dest1[7];
    //ft_memcpy(dest1, src1, 6);
    //dest1[6] = '\0';
    //printf("ft_memcpy(dest, \"abcdef\", 6): %s\n", dest1);

    //char src2[] = "123456";
    //memmove(src2 + 2, src2, 4);
    //printf("memmove(src2 + 2, src2, 4): %s\n", src2);

    return 0;
}
