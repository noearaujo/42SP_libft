#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    unsigned char digit = 0x97;
    int alpha = 'z';
/*     printf("libft\n  isdigit: %i\n  isalpha: %i", ft_isdigit(digit), ft_isalpha(alpha));
    printf("\nlibc\n  isdigit: %i\n  isalpha: %i", isdigit(digit), isalpha(alpha));

    printf("\nlibft\n  isalpha: %i", ft_isalnum(alpha));
    printf("\nlibc\n  isalpha: %i", isalnum(alpha));

    printf("\nlibft\n  isascii: %i", ft_isascii(0x1F));
    printf("\nlibc\n  isascii: %i", isascii(0x1F)); 

    printf("\nlibft\n  isprint: %i", ft_isprint(126));
    printf("\nlibc\n  isprint: %i", isprint(126)); */

    printf("\nlibc\n  isprint: %lc", digit);
}