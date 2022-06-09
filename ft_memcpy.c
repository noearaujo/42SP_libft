/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:40:22 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/08 23:40:22 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The  memcpy() function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use memmove(3) if the mem‐
// ory areas do overlap.

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if (!dst && !src)
        return (dst);
    while (n--)
        *d++ = *s++;
    return (dst);
}