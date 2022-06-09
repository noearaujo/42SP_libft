/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:39:20 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/08 23:39:20 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// contiguous allocation

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    char    *mem;

    if (!(mem = malloc(nmemb * size)))
        return (NULL);
    ft_bzero(mem, nmemb * size);
    return (mem);
}

/* int main(void)
{
    int *test;
    int i = 0;

    test = (int *)ft_calloc(0, 0);
    if (test == NULL)
        return (1);
    while (i < 5)
        printf("%i\n", test[i++]);
} */