# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msuarez- <msuarez-@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/28 09:13:41 by msuarez-          #+#    #+#              #
#    Updated: 2019/07/28 09:13:42 by msuarez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=eval_expr
SRCS=srcs/*.c
HEADERS=srcs/*.h
FLAGS=-Wall -Werror -Wextra

all:
	gcc $(FLAGS) $(SRCS) -o $(NAME) -I=$(HEADERS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
