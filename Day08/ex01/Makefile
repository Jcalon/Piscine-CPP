# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/09 16:52:15 by jcalon            #+#    #+#              #
#    Updated: 2022/09/11 19:19:01 by jcalon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ex01

SRCS 	= main.cpp Span.cpp

OBJS 	= ${SRCS:.cpp=.o}

CC 		= c++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98

.cpp.o:
		${CC} ${CFLAGS} -c -o $@ $<

all: 	${NAME}

${NAME}: ${OBJS}
		$(CC) $(CFLAGS) ${OBJS} -o ${NAME}
		@echo "\nCompiled!\n"

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f $(NAME)
		@echo "\nDeleting EVERYTHING!\n"

re:		fclean all

.PHONY: all clean fclean re