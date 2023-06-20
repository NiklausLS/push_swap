# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nileempo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 11:04:26 by nileempo          #+#    #+#              #
#    Updated: 2023/06/20 17:26:18 by nileempo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.c \
	  	init_stack.c \
	  	./errors_checking/check_errors.c \
		./printing/print_error.c \
		./printing/print_stack.c \
		./moving/swap.c \
		./moving/push.c \
		./moving/rotate.c \
		./moving/reverse_rotate.c \
		./sorting/radix.c \
		./sorintg/radix_utils.c \
		./sorting/sort_two.c \
		./sorting/sort_three.c \
		./sorting/sort_four.c \
		./sorting/sort_five.c \

LIBFT = Libft/

CC = gcc

H = push_swap.h

RM = rm -f

FLAGS = -Wall -Werror -Wextra

NAME = push_swap

OBJ = $(SRC:.c=.o)

.c.o:
	$(CC) $(FLAGS) -I $(H) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
		$(MAKE) -C $(LIBFT)
		cp ./Libft/libft.a $(NAME)

all: $(NAME)

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
