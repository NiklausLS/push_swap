# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nileempo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 11:18:08 by nileempo          #+#    #+#              #
#    Updated: 2023/06/15 06:53:40 by nileempo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_isspace.c \
	  	ft_strlen.c \
	  	ft_bzero.c \
	  	ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	  	ft_toupper.c ft_tolower.c \
	  	ft_atoi.c ft_itoa.c \
	  	ft_strncmp.c \
	  	ft_strlcpy.c \
	  	ft_strlcat.c \
	  	ft_strdup.c \
	  	ft_strchr.c ft_strrchr.c \
	  	ft_strnstr.c ft_substr.c \
	  	ft_strjoin.c \
	  	ft_strtrim.c \
	  	ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
	  	ft_calloc.c \
	  	ft_striteri.c ft_strmapi.c \
	  	ft_split.c \
	  	ft_lstadd_back.c ft_lstadd_front.c \
	  	ft_lstnew.c \
	  	ft_lstlast.c \
	  	ft_lstsize.c \

CC = gcc

RM = rm -f

FLAGS = -Wall -Werror -Wextra

H = libft.h

NAME = libft.a

OBJ = $(SRC:.c=.o)

.c.o:
	$(CC) $(FLAGS) -I $(H) -c $< -o $(<:.c=.o) 

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
