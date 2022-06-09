/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:41:46 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/08 23:41:46 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// include <bsd/atring.h>
//cc gdgdgdgdg -lbsd
// isso é para testar a função orininal

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t j;
    size_t i;

    i = 0;
    j = 0;
    if (!*little)
        return ((char *)big);
    while (big[i] && i < len)
    {
        if (big[i] == little[0])
        {
            while (little[j] && big[i + j] == little[j] && i + j < len)
            {
                if (!little[j + 1])
                    return ((char *)&big[i]);
                j++;
           }
        }
        i++;
    }
    return (NULL);
}
/* int main(void)
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;

    printf("%s\n%s\n", strnstr(largestring, smallstring, 4), ft_strnstr(largestring, smallstring, 4));
} */