# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybachaki <ybachaki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 23:34:28 by ybachaki          #+#    #+#              #
#    Updated: 2021/12/09 03:32:22 by ybachaki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = to_hexa.c	\
	ft_printf.c
	
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(SRC)
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@ar -rc $(NAME) $(OBJ)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all