# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lupayet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/24 09:34:40 by lupayet           #+#    #+#              #
#    Updated: 2025/06/04 14:12:19 by lupayet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC	= cc
AR = ar rs
CFLAGS	= -Wall -Wextra -Werror
RM = rm -f

LIBFTDIR = ./libft
LIBFTNAME = libft.a
SRC	= ft_printf.c print_ap.c

OBJ	= $(SRC:.c=.o) 

all:$(NAME)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

makelibft:
	make -C $(LIBFTDIR)
	cp $(LIBFTDIR)/$(LIBFTNAME) .
	mv $(LIBFTNAME) $(NAME)

$(NAME): $(OBJ)
	make makelibft
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	make clean -C $(LIBFTDIR)

fclean:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	make fclean -C $(LIBFTDIR)

re:fclean all

.PHONY: all clean fclean re bonus makelibft
