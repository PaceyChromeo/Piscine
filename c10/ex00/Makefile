# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pacey <pacey@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/03 08:38:11 by pjacob            #+#    #+#              #
#    Updated: 2021/02/14 19:10:57 by pacey            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_display_file

SRCS	=	ft_display_file.c

HDRS	=	display_file.h

OBJS	=	${SRCS:.c=.o}

CC		=	gcc

FLAGS	=	-Wall -Werror -Wextra

RM		=	rm -f

.c.o:
	${CC} ${FLAGS} -o $@ -c $<

ft_display_file:	${OBJS}
				${CC} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

.PHONY:		all clean fclean ft_display_file
