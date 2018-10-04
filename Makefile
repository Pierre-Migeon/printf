# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 16:09:15 by pmigeon           #+#    #+#              #
#    Updated: 2018/10/04 16:03:39 by pmigeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ./b_printf.c ./ft_strlen.c ./format.c 
HEADER = ./
LIBNAME = libftprintf.a
COMPILER = gcc
FLAGS = -Wall -Werror -Wextra -c
OFILE = b_printf.o ./ft_strlen.o ./format.o
NAME = libftprintf.a

all: $(NAME)

$(NAME): 
	$(COMPILER) $(FLAGS) $(SOURCES) -I $(HEADER)
	ar rc $(LIBNAME) $(OFILE)
	ranlib $(LIBNAME)

compile: 
	$(COMPILER) $(OFILE) -o prog

clean:
	/bin/rm -f $(OFILE)

fclean: clean 
	/bin/rm -f $(LIBNAME)

re: fclean all
