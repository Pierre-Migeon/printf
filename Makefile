# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmigeon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 16:09:15 by pmigeon           #+#    #+#              #
#    Updated: 2018/09/19 15:22:45 by pmigeon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ./main.c ./b_printf.c ./ft_strlen.c ./format.c 
HEADER = ./
LIBNAME = libftprintf.a
COMPILER = gcc
FLAGS = -Wall -Werror -Wextra -c
OFILE = main.o b_printf.o ./ft_strlen.o ./format.o
NAME = libftprintf.a

all: $(NAME)

$(NAME): 
	$(COMPILER) $(FLAGS) $(SOURCES) -I $(HEADER)
	$(COMPILER) $(OFILE) -o prog
	ar rc $(LIBNAME) $(OFILE)
	ranlib $(LIBNAME)

clean:
	/bin/rm -f $(OFILE)

fclean: clean 
	/bin/rm -f $(LIBNAME)

re: fclean all
