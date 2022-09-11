# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmontes- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 18:05:20 by lmontes-          #+#    #+#              #
#    Updated: 2022/07/25 18:05:25 by lmontes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c print_matrix.c

OBJS	= ${SRCS:.c=.o}

NAME	= bsq

ALT_SRCS = alt_main.c print_matrix.c prepare_matrix.c bsq_header.h print_matrix.h prepare_matrix.h solve_matrix.c solve_matrix.h open_function.c

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

alt:		${ALT_SRCS}
			${CC}  ${ALT_SRCS}

.PHONY:		all clean fclean re