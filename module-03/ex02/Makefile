# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 01:38:25 by kiroussa          #+#    #+#              #
#    Updated: 2023/12/06 12:19:05 by kiroussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	frag-trap	

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror
COPTS	=	-std=c++98

SRCS	=	main.cpp \
			ClapTrap.cpp \
			FragTrap.cpp \
			ScavTrap.cpp

OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(COPTS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $(COPTS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
