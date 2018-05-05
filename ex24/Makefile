# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aziabkin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/20 19:38:01 by aziabkin          #+#    #+#              #
#    Updated: 2018/03/20 19:40:39 by aziabkin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c 
OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER = includes/ft.h

all: $(NAME)

$(NAME):
	gcc  -c  $(SRC) -I $(HEADER) 
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean 
	rm -f $(NAME)

re: fclean all 

