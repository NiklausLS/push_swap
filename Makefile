# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nileempo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 11:04:26 by nileempo          #+#    #+#              #
#    Updated: 2023/06/24 21:14:29 by nileempo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	main.c \
	  	init_stack.c \
	  	./checking/check_errors.c \
		./checking/check_sorting.c \
		./checking/check_others.c \
		./checking/check_all.c \
		./printing/print_error.c \
		./moving/swap.c \
		./moving/push.c \
		./moving/rotate.c \
		./moving/reverse_rotate.c \
		./sorting/indexation.c \
		./sorting/radix.c \
		./sorting/sort_two.c \
		./sorting/sort_three.c \
		./sorting/sort_four.c \
		./sorting/sort_five.c \
		./sorting/sort_all.c \
		freeing.c \

LIBFT = Libft/

CC = gcc

H = push_swap.h

RM = rm -f

FLAGS = -Wall -Werror -Wextra #-fsanitize=address

NAME = push_swap

OBJ = $(SRC:.c=.o)

.c.o:
	$(CC) $(FLAGS) -I $(H) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(MAKE) -C $(LIBFT)
		$(CC) $(FLAGS) $(OBJ) -I $(H) ./Libft/libft.a -o $(NAME)

clean:
	$(RM) $(OBJ)
	$(MAKE) clean -C $(LIBFT)
	@echo "PUSH_SWAP : CLEAN OK"

fclean: clean
	$(RM) $(NAME)
	$(RM) Libft/libft.a
	@echo "PUSH_SWAP : FCLEAN OK"

re: fclean all
	@echo "PUSH_SWAP : RE OK"

.PHONY: all clean fclean re
