/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:42:30 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/09 15:42:30 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if(!src & !dest)
		return (dest);
	if (src < dest)
		while (n--)
			d[n] = s[n];
	else
		while(n--)
			*d++ = *s++;
	return (dest);
}

/* int	main(void)
{
	char *src = "12345";
	char dest[3] = "321";
	size_t n = 2;

	printf("return: %s\nsrc: %s\ndest: %s", (char *)memmove(dest, src, n), src, dest);
	printf("-------------------------\\|/");
	printf("return: %s\nsrc: %s\ndest: %s", (char *)memmove(dest, src, n), src, dest);
	return (0);
} */