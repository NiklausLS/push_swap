/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:22:04 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/20 11:08:45 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "Libft/libft.h"

int		main(int argc, char **argv);
void	init_stack(int argc, char **argv, t_list **stack);

//check errors
void	checking(char **argv);

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

//my functions to sort stacks
void	sort_three(t_list **stack);
int		check_sorting(t_list *stack);

//radix_sort
void	radix(t_list **stack_a, t_list **stack_b);
void	indexation(t_list **stack);
int     find_min_index(t_list **stack);
//t_list  *find_min(t_list **stack);
//t_list  *find_next_min(t_list **stack, t_list **last_min);

//use to printf what's inside my stacks
void	printing(t_list *stack);
//void    print_index(t_list *stack);
#endif
