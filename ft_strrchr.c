/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:19:21 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/09 11:19:21 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *first_point_s;

	first_point_s = s;
	while (*s)
		s++;
	while (s >= first_point_s)
	{
		if (*s == (char)c)
			return (char *)s;
		s--;
	}
	return (NULL);
}
