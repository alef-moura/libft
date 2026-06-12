# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/28 13:27:38 by alesferr          #+#    #+#              #
#    Updated: 2026/06/11 18:50:57 by alesferr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJ = $(SRC:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror
HEADER = libft.h
AR = ar -rcs

SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
		ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_putchar_fd.c 
		
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o:%.c $(HEADER)
	$(CC) $(FLAGS) -I . -c $< -o $@
	
clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re