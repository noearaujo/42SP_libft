/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:21:52 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/13 13:21:52 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t end_len;

	if(!s1 && !set)
		return (NULL);
	while (*s1 && ft_strrchr(set, *s1))
		s1++;
	end_len = ft_strlen(s1);
	while (end_len && ft_strrchr(set, s1[end_len]))
		end_len--;
	return (ft_substr(s1, 0, (end_len + 1)));
}


//ele corta o ultimo palavra terminada com null, ou seja, se eu for cortar ma string, trei que informar
// o ini