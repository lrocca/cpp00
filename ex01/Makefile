# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocca <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 19:38:09 by lrocca            #+#    #+#              #
#    Updated: 2021/11/04 16:01:03 by lrocca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	phonebook
FILES	=	main.cpp PhoneBook.cpp Contact.cpp
INC		=	PhoneBook.hpp Contact.hpp

OBJ		=	$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

clean: ;

fclean: clean
	$(RM) $(NAME)

re: fclean all
