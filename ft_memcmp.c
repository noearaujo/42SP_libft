/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:16:29 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/10 15:16:29 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
como estamos comparando bytes de memoria, então precisams usar o char, pois ele aloca 1 byte e isso facilita.
então para compararmos de os 255 
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2; 

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (--n && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return ((int)(*str1 - *str2));
}

/* int	main(int argc, char *argv[])
{
	size_t n = 3;
	if (argc == 3)
	{
		printf("argv[1]: %s\nargv[2]: %s\n argv[3]: %s\nreturn: %i\n",argv[1], argv[2], argv[3],  memcmp(argv[1],argv[2], n));
	}
} */