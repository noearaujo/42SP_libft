# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nrosa-de <nrosa-de@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 11:41:06 by nrosa-de          #+#    #+#              #
#    Updated: 2022/06/27 11:41:06 by nrosa-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./ft_calloc.c \
		./ft_bzero.c \
		./ft_isascii.c \
		./ft_isalnum.c \
		./ft_isalpha.c \
		./ft_isdigit.c \
		./ft_isprint.c \
		./ft_memset.c \
		./ft_strdup.c \
		./ft_strlcpy.c \
		./ft_strlen.c \
		./ft_strlcat.c \
		./ft_strncmp.c \
		./ft_memcpy.c \
		./ft_strnstr.c \
		./ft_atoi.c \
		./ft_strchr.c \
		./ft_strrchr.c \
		./ft_memmove.c \
		./ft_memcmp.c \
		./ft_memchr.c \
		./ft_tolower.c \
		./ft_toupper.c \
		./ft_substr.c \
		./ft_strjoin.c \
		./ft_itoa.c \
		./ft_strmapi.c \
		./ft_strtrim.c \
		./ft_putstr_fd.c \
		./ft_putchar_fd.c \
		./ft_putnbr_fd.c \
		./ft_putendl_fd.c \
		./ft_split.c \
		./ft_striteri.c \

OBJS	= ${SRC:.c=.o}

NAME	= libft.a

CC		= cc

AR		= ar rc

RANLIB	= ranlib

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${RANLIB} ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean