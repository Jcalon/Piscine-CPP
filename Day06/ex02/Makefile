# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/09 16:52:15 by jcalon            #+#    #+#              #
#    Updated: 2022/09/09 15:23:54 by jcalon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= identify

SRCS 	= main.cpp

OBJS 	= ${SRCS:.cpp=.o}

CXX 		= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

.cpp.o:
		$(CXX) $(CXXFLAGS) -c -o $@ $<

all: 	${NAME}

${NAME}: ${OBJS}
		$(CXX) $(CXXFLAGS) ${OBJS} -o $@
		@echo "\nCompiled!\n"

clean:
		rm -rf ${OBJS}

fclean: clean
		rm -f $(NAME)
		@echo "\nEverything deleted!\n"

re:		fclean all

.PHONY: all clean fclean re