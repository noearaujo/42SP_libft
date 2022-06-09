/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:40:01 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/08 23:40:01 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Ele vai ler das duas formas (assim ele consegue comparar) quanto da 

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}