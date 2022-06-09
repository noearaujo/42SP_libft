/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:40:41 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/08 23:40:41 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char *mem;

    if (!(mem = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
    ft_strlcpy(mem, s, sizeof(char) * ft_strlen(s) + 1);
    return (mem);
}

int main(void)
{
    char *test;
    int i = 0;

    test = ft_strdup("12345");
    if (test == NULL)
        return (1);
    
    while (i < 1000)
        printf("%i\n", test[i++]);
}