/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:39:03 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/08 23:39:03 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char    *p;

    p = (unsigned char *) s;
    while (n > 0)
    {
        p[n - 1] = '\0';
        n--;
    }
}


/* int main(void)
{
    char s[10] = "ola mundo";
    char s2[10] = "ola mundo";
    int i = 0;

    bzero(s, 4 * sizeof(char));
    while (i < 10)
        printf("%c", s[i++]);
    printf("\n");
    i = 0;
    ft_bzero(s2, 4 * sizeof(char));
    while (i < 10)
        printf("%c", s2[i++]);
    printf("\n");
} */