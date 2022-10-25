# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmedrano <lmedrano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 15:51:11 by lmedrano          #+#    #+#              #
#    Updated: 2022/10/21 18:28:46 by lmedrano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_substr.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_calloc.c ft_strdup.c ft_strnstr.c ft_atoi.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_memcmp.c ft_memmove.c ft_memcpy.c ft_memchr.c ft_strlen.c ft_isascii.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_memset.c 

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

CC			= gcc

ARRC		= ar rc

RM			= rm -f

CFLAGS		= -Wall -Werror -Wextra

.c.o:	
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${ARRC} ${NAME} ${OBJS}

all:		${NAME}

clean:	
			${RM} ${OBJS}

fclean: 	clean 
			${RM} ${NAME}

re:			fclean all	

.PHONY: 	all clean fclean re
