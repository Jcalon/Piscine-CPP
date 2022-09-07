# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/09 16:52:15 by jcalon            #+#    #+#              #
#    Updated: 2022/09/07 15:59:49 by jcalon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= interface

SRCS 	= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJS 	= ${SRCS:.cpp=.o}

DEP		= ${SRCS:.cpp=.d}

CXX 		= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

.cpp.o:
		${CXX} ${CXXFLAGS} -MMD -c -o $@ $<

all: 	${NAME}

${NAME}: Makefile ${OBJS} 
		$(CXX) $(CXXFLAGS) -MMD ${OBJS} -o ${NAME}
		@echo "\nCompiled!\n"

-include $(DEP)

clean:
		rm -f ${OBJS}
		rm -f ${DEP}

fclean: clean
		rm -f $(NAME)
		@echo "\nEverything deleted!\n"

re:		fclean all

.PHONY: all clean fclean re