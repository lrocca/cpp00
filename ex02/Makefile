# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocca <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 17:10:13 by lrocca            #+#    #+#              #
#    Updated: 2021/11/07 19:23:58 by lrocca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	clang++
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	gbu
FILES	=	tests.cpp Account.cpp

LOG_URL	=	https://projects.intra.42.fr/uploads/document/document/4996/
LOG_REF	=	19920104_091532.log
LOG_OUT	=	my.log

OBJ		=	$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	$(RM) $(OBJ) $(wildcard *.ghc)

fclean: clean
	$(RM) $(NAME) $(LOG_REF) $(LOG_OUT)

$(LOG_REF):
	curl -s $(LOG_URL)$@ -o $@

$(LOG_OUT): $(NAME)
	./$^ > $@

test: $(LOG_REF) $(LOG_OUT)
	bash -c "diff -C3 <(cut -c19-100 $(word 2,$^)) <(cut -c19-100 $<)"

re: fclean all
