# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alesferr <alesferr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/27 15:22:33 by alesferr          #+#    #+#              #
#    Updated: 2026/06/01 17:26:08 by alesferr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c \
		ft_strlen.c 
		ft_memset.c ft_bzero.c 
				
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
CC = cc

AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o:%.c
	$(CC) $(FLAGS) $(OBJ)
	
clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:

.PHONY: all clean fclean re