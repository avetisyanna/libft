#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/* Helper functions for ft_strmapi and ft_striteri */
char add_one(unsigned int i, char c)
{
    (void)i; // i is unused
    return c + 1;
}

void inc_char(unsigned int i, char *c)
{
    (void)i; // i is unused
    *c = *c + 1;
}

int main(void)
{
    /* -------- Memory & String functions -------- */
    char str[15] = "1234567890";
    ft_bzero(str, 5);
    printf("ft_bzero: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", str[i]);
    printf("\n");

    char src[] = "abcdef";
    char dest[10];
    ft_memcpy(dest, src, 6);
    printf("ft_memcpy: %s\n", dest);

    char *dup = ft_strdup("Hello");
    printf("ft_strdup: %s\n", dup);
    free(dup);

    printf("ft_strlen(\"Hello\"): %zu\n", ft_strlen("Hello"));
    printf("ft_strchr(\"Hello\", 'l'): %s\n", ft_strchr("Hello", 'l'));
    printf("ft_strrchr(\"Hello\", 'l'): %s\n", ft_strrchr("Hello", 'l'));
    printf("ft_strncmp(\"abc\", \"abd\", 2): %d\n", ft_strncmp("abc", "abd", 2));

    /* -------- Character checks -------- */
    printf("ft_isalpha('a'): %d\n", ft_isalpha('a'));
    printf("ft_isdigit('1'): %d\n", ft_isdigit('1'));
    printf("ft_isalnum('9'): %d\n", ft_isalnum('9'));
    printf("ft_isascii('~'): %d\n", ft_isascii('~'));
    printf("ft_isprint(' '): %d\n", ft_isprint(' '));
    printf("ft_toupper('a'): %c\n", ft_toupper('a'));
    printf("ft_tolower('Z'): %c\n", ft_tolower('Z'));

    /* -------- File descriptor output -------- */
    ft_putchar_fd('A', 1);
    ft_putstr_fd("\nft_putstr_fd: Hello\n", 1);
    ft_putendl_fd("ft_putendl_fd: This is a line", 1);
    ft_putnbr_fd(12345, 1);
    ft_putstr_fd("\n", 1);

    /* -------- Conversions & allocations -------- */
    printf("ft_atoi(\"42\"): %d\n", ft_atoi("42"));
    char *itoa_result = ft_itoa(6789);
    printf("ft_itoa(6789): %s\n", itoa_result);
    free(itoa_result);

    char *substr = ft_substr("Hello World", 6, 5);
    printf("ft_substr(\"Hello World\", 6, 5): %s\n", substr);
    free(substr);

    char *joined = ft_strjoin("Hello", "World");
    printf("ft_strjoin(\"Hello\", \"World\"): %s\n", joined);
    free(joined);

    char *trimmed = ft_strtrim("   Hello   ", " ");
    printf("ft_strtrim(\"   Hello   \", \" \"): %s\n", trimmed);
    free(trimmed);

    char *mapped = ft_strmapi("abcd", add_one);
    printf("ft_strmapi(\"abcd\"): %s\n", mapped);
    free(mapped);

    char str_iter[] = "abcd";
    ft_striteri(str_iter, inc_char);
    printf("ft_striteri(\"abcd\"): %s\n", str_iter);

    /* -------- Split -------- */
    char **split = ft_split("Hello World Test", ' ');
    printf("ft_split(\"Hello World Test\", ' '): ");
    for (int i = 0; split[i]; i++)
    {
        printf("[%s] ", split[i]);
        free(split[i]);
    }
    free(split);
    printf("\n");

    return 0;
}
