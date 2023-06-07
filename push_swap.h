/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:22:04 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/07 15:39:35 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "Libft/libft.h"

// my structure
typedef struct s_list {
	int	data;
	int	index;
	struct s_list *next;
}	t_list;

// my functions for chained list 
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int *data);
int		ft_lstsize(t_list *lst);

int		main(int argc, char **argv);
t_list	init_stack(int argc, char **argv);
void	new_node(t_list **head, int nbr);

//my functions to checks errors
int		check_doubles(t_list *stack);
int		check_nbr(char **argv);
long	check_minmax(long *nbr);

//print error on sdterr
void	error_stderr();

//swap two
void	swap(t_list *stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);

//push two
void	push(t_list **dest, t_list **src);
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);

//rotate
void	rotate(t_list **stack);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);

//reverse rotate
void	reverse_rotate(t_list **stack);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

//use to printf what's inside my stacks
void	print_stack(t_list *stack);
#endif
