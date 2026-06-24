# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trambure <trambure@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/29 14:24:54 by trambure          #+#    #+#              #
#    Updated: 2026/03/30 17:24:05 by trambure         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materia
CXX = c++ -g
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp MateriaSource.cpp Ice.cpp Cure.cpp \
		Character.cpp AMateria.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all