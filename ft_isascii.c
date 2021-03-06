/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:39:54 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/08 23:39:54 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
    return (c >= 0x00 && c <= 0x7F);
}

/* int main(void)
{
    int digit = ' ';
    printf("%i\n", ft_isascii(digit));
} */