# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alesferr <alesferr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/21 18:35:25 by alesferr          #+#    #+#              #
#    Updated: 2026/05/21 18:56:01 by alesferr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
SRCS = ft_bzero.c ft_islnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_memcpy.c ft_memset.c ft_strlen.c \
		ft_memmove

OBJS = $(SRCS:.c*.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(AR) $(CFLAGS) -C $< -0 $