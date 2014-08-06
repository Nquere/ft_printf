# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nquere <nquere@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/05/04 03:14:03 by nquere            #+#    #+#              #
#    Updated: 2014/05/04 03:14:06 by nquere           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC1 = ft_putchar.c\
	  ft_istype.c\
	  ft_istype_d.c\
	  ft_istype_i.c\
	  ft_istype_c.c\
	  ft_istype_s.c\
	  ft_putstr.c\
	  ft_nbrlen.c\
	  ft_putnbr.c\
	  ft_strcpy.c\
	  ft_strlen.c\
	  ft_printf.c

OBJ1 = $(SRC1:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all: $(NAME)

$(NAME): $(OBJ1)
	@(ar -rc $(NAME) $(OBJ1))
	@(ranlib $(NAME))
	@echo "\033[35m$(NAME) created ! ^.^\033[0m"

%.o:%.c
	@($(CC) -c $(SRC1) $(CFLAGS))

clean:
	@(rm -f $(OBJ1))
	@echo "\033[31mObject files deleted !\033[0m"

fclean: clean
	@(rm -f $(NAME))
	@echo "\033[31m$(NAME) deleted !\033[0m"

re: fclean all

