/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:29:44 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/14 17:29:44 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	int2str(char *str, int n, size_t size)
{
	str[size] = '\0';
	if (n >= 0)
		while (size--)
		{
			str[size] = (n % 10) + '0';
			n /= 10; 
		}
	else
	{
			while (--size)
		{
			str[size] = (n % 10) * -1 + '0';
			n /= 10; 
		}
		str[size] = '-';
	}
}

char	*ft_itoa(int n)
{
	char *mem;
	int temp;
	size_t size;

	temp = n;
	if (n <= 0)
		size = 1;
	if (n > 0)
		size = 0;
	while (temp)
	{
		temp /= 10;
		size++;
	}
	if (!(mem = malloc(size + 1)))
		return (NULL);
	int2str(mem, n, size);
	return (mem);
}