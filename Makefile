# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmedrano <lmedrano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 15:51:11 by lmedrano          #+#    #+#              #
#    Updated: 2022/10/17 16:38:41 by lmedrano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_memmove.c ft_memcpy.c ft_memchr.c ft_strlen.c ft_isascii.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= gcc

ARRC	= ar rc

RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:	
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${ARRC} ${NAME} ${OBJS}

all:	${NAME}

clean:	
	${RM} ${OBJS}

fclean: clean 
	${RM} ${NAME}

re:	fclean all	

.PHONY: all clean fclean re
