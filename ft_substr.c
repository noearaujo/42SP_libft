/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 05:23:50 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/13 05:23:50 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*mem;
	unsigned int	end;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	end = ft_strlen(&s[start]);
	if (end <= len)
		mem = (char *)malloc(end + 1);
	else
		mem = (char *)malloc(len + 1);
	if (mem == NULL)
		return (NULL);
	ft_strlcpy(mem, &s[start], len + 1);
	return (mem);
}