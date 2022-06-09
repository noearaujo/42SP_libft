SRC		= ft_calloc.c  ft_bzero.c  ft_isalnum.c ft_isalpha.c ft_isdigit.c \
		  ft_isprint.c ft_memset.c ft_strdup.c  ft_strlcpy.c ft_strlen.c \
		  ft_strlcat.c ft_strncmp.c ft_memcpy.c ft_strnstr.c ft_atoi.c


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