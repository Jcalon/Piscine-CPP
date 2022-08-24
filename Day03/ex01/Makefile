# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/09 16:52:15 by jcalon            #+#    #+#              #
#    Updated: 2022/08/24 18:33:07 by jcalon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= scavtrap

SRCS 	= main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS 	= ${SRCS:.cpp=.o}

CC 		= clang++
CFLAGS 	= -Wall -Wextra -Werror -std=c++98

.c.o:
		@${CC} ${CFLAGS} -c -o $@ $<

all: 	${NAME}

${NAME}: ${OBJS}
		@$(CC) $(CFLAGS) ${OBJS} -o ${NAME}
		@echo "\nCompiled!\n"

clean:
		@rm -f ${OBJS}

fclean: clean
		@rm -f $(NAME)
		@echo "\nDeleting EVERYTHING!\n"

re:		fclean all

.PHONY: all clean fclean re