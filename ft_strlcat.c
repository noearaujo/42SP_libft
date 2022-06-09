/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:40:50 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/08 23:40:50 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//acrescenta a string do src ao final do destino, porel é determinado o tamanho
//

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dlen;
    size_t slen;
    size_t i;

    dlen = ft_strlen(dst);
    slen = ft_strlen(src);
    if (size <= dlen)
        return (size + slen);
    i = 0;
    while (src[i] && i < slen - 1)
    {
        dst[dlen + i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return ((slen - 1) + i);
}

/* int main(void)
{
    char dst[10] = "12";
    char src[10] = "ABCD";
    char dst2[10] = "12";
    size_t size = 4;

    printf("return: %li\n", strlcat(dst, src, size));
    printf("src: %s\ndst: %s\nsize: %li\n", src, dst, size);
    
    printf("---------\nreturn: %li\n", ft_strlcat(dst2, src, size));
    printf("src: %s\ndst: %s\nsize: %li\n", src, dst2, size);
} */