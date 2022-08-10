# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/09 16:52:15 by jcalon            #+#    #+#              #
#    Updated: 2022/08/10 19:54:01 by jcalon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= harl

SRCS 	= main.cpp Harl.cpp

OBJS 	= ${SRCS:.cpp=.o}

CC 		= clang++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98

INCLUDES = -I libft -I includes

.c.o:
		@${CC} ${CFLAGS} ${INCLUDES} -c -o $@ $<

all: 	${NAME}

${NAME}: ${OBJS}
		@$(CC) $(CFLAGS) ${OBJS} ${INCLUDES} -o ${NAME}
		@echo "\nCompiled!\n"

clean:
		@rm -f ${OBJS}

fclean: clean
		@rm -f $(NAME)
		@echo "\nDeleting EVERYTHING!\n"

re:		fclean all

.PHONY: all clean fclean re