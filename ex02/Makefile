# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 18:01:28 by scavalli          #+#    #+#              #
#    Updated: 2025/05/12 18:09:59 by scavalli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = megaphone.cpp
NAME=megaphone
CC=c++ -std=c++98
CFLAGS=-Wall -Wextra -Werror
SRCS = $(FILE)
OBJS = ${SRCS:.cpp=.o}

.PHONY: all clean fclean re

all : $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)\

re : fclean all