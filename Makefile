# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/27 15:22:33 by alesferr          #+#    #+#              #
#    Updated: 2026/06/09 18:37:06 by alesferr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c \
		ft_strlen.c ft_strlcpy.c ft_strcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
		ft_atoi.c ft_callog.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_putchar_fd.c 
				
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