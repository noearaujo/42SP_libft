/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:40:31 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/08 23:40:31 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void    *ft_memset(void *s, int c, size_t n)
{
    char *p;
    size_t i;

    p = (char *) s;
    i = 0;
    while (i < n)
        p[i++] = c;
    return (s);
}

/* int main(void)
{
    char *s = (char *) "Ola Mundo! ola ola";
    int c;
    size_t n;
    char *retorno;

    s[11] = '1';
    printf("S: %s\n", s);
    c = '*';
    n = 5 * sizeof(char);
    retorno = (char *)memset(s + 4, c, n);
    printf("S: %s\nC: %c\nsize_t: %li\nretorno: %s", s, c, n, retorno);
} */