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
	size_t i;
	size_t dst_size;

	dst_size = 0;
	while (dst[dst_size] && dst_size < size)
		dst_size++;
	i = dst_size;
	while (src[dst_size - i] && dst_size + 1 < size)
	{
		dst[dst_size] = src[dst_size - i];
		dst_size++;
	}

	if (i < size)
		dst[dst_size] = '\0';
	return (i + ft_strlen(src));
}

/* int main(void)
{
    char dst[10] = "12";
    char src[10] = "ABCD";
    char dst2[10] = "12";
    size_t size = 3;

    printf("return: %li\n", strlcat(dst, src, size));
    printf("src: %s\ndst: %s\nsize: %li\n", src, dst, size);
    
    printf("---------\nreturn: %li\n", ft_strlcat(dst2, src, size));
    printf("src: %s\ndst: %s\nsize: %li\n", src, dst2, size);
} */