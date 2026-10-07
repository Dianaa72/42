# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dde-luca <dde-luca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/07 18:53:57 by dde-luca          #+#    #+#              #
#    Updated: 2026/10/07 19:15:44 by dde-luca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAGS = -Wall -Wetra -Werror

NAME = libft.a

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

OBJ = $(SRC : .c=.o)

INCLUDE = libft.h

RM = rm -rf

#normas

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

#all es lo primero que va a hacer cuando haga make, porque es la primera norma 
#que hemos puesto

all : $(NAME) #equivalente a make porque si hacemos solo make va a hacer el all

clean :
	$(RM) $(OBJ)
	
fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY all clean fclean re



