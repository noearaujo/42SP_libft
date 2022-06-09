/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:41:56 by nrosa-de          #+#    #+#             */
/*   Updated: 2022/06/08 23:41:56 by nrosa-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//-----Includes------Start
    #include <stdio.h>
    #include <bsd/string.h>

    #include <stdlib.h>
//-----Includes------End

//---- Prototipes----- Start

// is
    int     ft_isalpha(int c);
    int     ft_isdigit(int c);
    int     ft_isascii(int c);
    int     ft_isalnum(int c);
    int     ft_isprint(int c);

// mem
    void    *ft_memset(void *s, int c, size_t n);
    void    *ft_memcpy(void *dst, const void *src, size_t n);

// str
    size_t  ft_strlen(const char *s);
    size_t  ft_strlcpy(char *dst, const char *src, size_t size);
    size_t  ft_strlcat(char *dst, const char *src, size_t size);
    int     ft_strncmp(const char *s1, const char *s2, size_t n);
    char    *ft_strnstr(const char *big, const char *little, size_t len);


    int     ft_atoi(const char *str);
    void    ft_bzero(void *s, size_t n);
    void    *ft_calloc(size_t nmemb, size_t size);

//---- Prototipes----- End
#endif