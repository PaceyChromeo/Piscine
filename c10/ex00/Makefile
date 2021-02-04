# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjacob <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/03 08:38:11 by pjacob            #+#    #+#              #
#    Updated: 2021/02/03 09:05:45 by pjacob           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_display_file

SRCS	=	./ft_display_file.c

HDRS	=	./display_file.h

OBJS	=	${SRCS:.c=.o}

CC		=	gcc

FLAGS	=	-Wall -Werror -Wextra

RM		=	rm -f

.c.o:
	${CC} ${FLAGS} -c $@ $< -o ${<:.c=.o} -I ${HDRS}

ft_display_file:	${OBJS}
				${CC} ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

.PHONY:		all clean fclean ft_display_file
