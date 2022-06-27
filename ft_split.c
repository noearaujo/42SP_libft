/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 06:15:39 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/27 06:15:39 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numwords(const char *s, const char c)
{
	int	i;
	int	count_words;
	int	found_word;

	i = 0;
	count_words = 0;
	found_word = 0;
	while (s[i])
	{
		if (s[i] != c && !found_word)
		{
			found_word = 1;
			count_words++;
		}
		else if (s[i] == c && found_word)
			found_word = 0;
		i++;
	}
	return (count_words);
}

static char *ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

static char *ft_strndup(const char *s, size_t len)
{
	char	*mem;

	mem = malloc (sizeof(char) * len + 1);
	if (!mem)
		return (NULL);
	mem = ft_strncpy(mem, s, len);
	mem[len] = '\0';
	return (mem);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		initpos;
	int		endpos;
	int		p;
	char	**pmem;

	i = 0;
	p = 0;
	initpos = 0;
	endpos = 0;
	pmem = (char **) malloc(sizeof(char *) * ((numwords(s, c) + 1)));
	if (!pmem)
		return NULL;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		initpos = i;
		while (s[i] != c && s[i])
			i++;
		endpos = i;
		if (endpos > initpos)
			pmem[p++] = ft_strndup(s + initpos, endpos - initpos);
	}
	pmem[p] = NULL;
	return (pmem);
}