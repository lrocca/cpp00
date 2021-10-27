# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocca <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 20:52:02 by lrocca            #+#    #+#              #
#    Updated: 2021/10/27 21:01:10 by lrocca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	megaphone
FILES	=	megaphone.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	@:

fclean: clean
	$(RM) $(NAME)

re: fclean all
