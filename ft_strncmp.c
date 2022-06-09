/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:32:14 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/08 22:32:14 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while ((s1[i] && s2[i]) && n--)
    {
        if (s1[i] != s2[i])
            return ((unsigned char) s1[i] - (unsigned char)s2[i]);
    }
    return (0);
}

/* int main(void)
{
    
} */