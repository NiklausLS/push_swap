# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nileempo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 11:04:26 by nileempo          #+#    #+#              #
#    Updated: 2023/06/07 12:38:44 by nileempo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.c \
	  	./utils/ft_lstnew.c \
	  	./utils/ft_lstadd_back.c \
		./utils/ft_lstadd_front.c \
		./utils/ft_lstsize.c \
		./utils/ft_lstlast.c \
		init_stack.c \
		./errors_checking/check_errors.c \
		./errors_checking/check_args.c \
		./printing/print_error.c \
		./printing/print_stack.c \
		./sorting/swap.c \
		./sorting/push.c \

LIBFT = Libft/

CC = gcc

H = ./headers/push_swap.h

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
