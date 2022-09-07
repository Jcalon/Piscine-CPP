# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcalon <jcalon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/09 16:52:15 by jcalon            #+#    #+#              #
#    Updated: 2022/09/06 15:28:20 by jcalon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

SRCS 	= main.cpp Contact.cpp PhoneBook.cpp

OBJS 	= ${SRCS:.cpp=.o}

CPP 		= c++
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98

.cpp.o:
		${CPP} ${CPPFLAGS} -c -o $@ $<

all: 	${NAME}

${NAME}: ${OBJS}
		$(CPP) $(CPPFLAGS) ${OBJS} -o ${NAME}
		@echo "\nCompiled!\n"

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f $(NAME)
		@echo "\nEverything deleted!\n"

re:		fclean all

.PHONY: all clean fclean re