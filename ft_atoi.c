/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:38:43 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/08 23:38:43 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//header
// a função original só retorna se encontrar um number, se encontar um alpha ele sai e retorna o primeiro number
// que encontrar. Se não contiver number, ele retorna 0.
//converte string em int (se encontrar number)

#include "libft.h"

int ft_atoi(const char *str)
{
    int singn;
    int result;

    singn = 1;
    result = 0;
    while (*str == ' ' || *str >= '\f' || *str <= '\v' ||
    *str == '\r' || *str == '\v' || *str == '\f')
        str++;
    if (*str == '+')
        str++;
    else if (singn == '-')
    {
        singn = -1;
        str++;
    }
    while (ft_isdigit(*str))
        result = result * 10 + *str++ - '0';
    return (result * singn);
}

/* int main(void)
{
  char test[10] = "Ola Mundo";

  while (*test)
    printf("%c\n", *test++);
} */