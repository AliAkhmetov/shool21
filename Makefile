# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tacousti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020\11\08 15:13:25 by tacousti          #+#    #+#              #
#    Updated: 2020\11\08 15:13:28 by tacousti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES =	ft_calloc.c \
			ft_isascii.c \
			ft_itoa.c \
			ft_memcmp.c \
			ft_memset.c \
			ft_putnbr_fd.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strmapi.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_atoi.c \
			ft_isalnum.c \
			ft_isdigit.c \
			ft_memccpy.c \
			ft_memcpy.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_strdup.c \
			ft_strlcpy.c \
			ft_strncmp.c \
			ft_strtrim.c \
			ft_toupper.c \
			ft_bzero.c \
			ft_isalpha.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memmove.c \
			ft_putendl_fd.c \
			ft_split.c \
			ft_strjoin.c \
			ft_strlen.c \
			ft_strnstr.c \
			ft_substr.c \

CC = gcc

FLAGS = -Wall -Wextra -Werror -c

OBJ = $(SOURCES:%.c=%.o)

$(NAME): $(OBJ) libft.h
	ar rc $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(FLAGS) $< -o $@

all: $(NAME)
	
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: clean fclean all
