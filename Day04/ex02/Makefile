# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/09 16:52:15 by jcalon            #+#    #+#              #
#    Updated: 2022/09/09 14:20:03 by jcalon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= brain

SRC 	= main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp

INCLUDES = -I includes

SRCS_PATH = srcs/

OBJS_PATH = objs/

SRCS = $(addprefix $(SRCS_PATH), $(SRC))

OBJ 	= ${SRC:.cpp=.o}

OBJS = $(addprefix $(OBJS_PATH), $(OBJ))

CXX 		= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

all: 	${NAME}

$(OBJS_PATH)%.o: $(SRCS_PATH)%.cpp
		@mkdir -p $(OBJS_PATH)
		${CXX} ${CXXFLAGS} ${INCLUDES} -c -o $@ $<

${NAME}: ${OBJS} 
		$(CXX) $(CXXFLAGS) ${OBJS} ${INCLUDES} -o $@
		@echo "\nCompiled!\n"

clean:
		rm -rf ${OBJS_PATH}

fclean: clean
		rm -f $(NAME)
		@echo "\nEverything deleted!\n"

re:		fclean all

.PHONY: all clean fclean re