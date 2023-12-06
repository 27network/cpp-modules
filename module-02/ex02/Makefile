# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kiroussa <oss@xtrm.me>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 01:38:25 by kiroussa          #+#    #+#              #
#    Updated: 2023/12/06 07:34:12 by kiroussa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fixed-points	

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror
COPTS	=	-std=c++98

SRCS	=	main.cpp \
			Fixed.cpp

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
