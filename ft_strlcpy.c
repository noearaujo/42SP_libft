/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:41:01 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/08 23:41:01 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//header sudo apt-get install  libbsd-dev e #include <bsd/string.h> e cc ft_strlcpy.c -lbsd

#include "libft.h"
//#include <bsd/string.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

    len = ft_strlen(src);
    i = 0;
    if (!len)
        return (0);
    if (!size)
        return (len);
    while (src[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}


/* int main(void)
{
    size_t size =  4;
    char *src = "123";
    char dst[4] = "";
    char dst2[4] = "";

    printf("Original\nretorno: %li", strlcpy(dst, src, size));
    printf("\nsrc: %s\ndst: %s\n------", src, dst);

    printf("\nPirata\nretorno: %li", ft_strlcpy(dst2, src, size));
    printf("\nsrc: %s\ndst: %s\n", src, dst2); */

/*     int i = 0;
    while (i <= 9)
    {
        printf("\ntest: %c", dst[i]);
        i++;
    }
} */

