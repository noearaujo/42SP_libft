/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:41:27 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/08 23:41:27 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

size_t  ft_strlen(const char *s)
{
    size_t len;

    len = 0;
    while (s[len])
         len++;
    return (len);
}

/* int main(void)
{
    printf("%li\n", strlen("12345678"));
    printf("%li\n", ft_strlen("12345678"));
} */
