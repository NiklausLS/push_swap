/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:22:04 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/24 08:23:45 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

# include "Libft/libft.h"

int		main(int argc, char **argv);
void	initialisation(int argc, char **argv, t_list **stack);

//free
void	free_split(char **split);
void	free_stack(t_list **stack);
void	free_one_arg(int argc, char **split);

//check errors
int     check_nbr(char *argv);
int     check_minmax(long nbr);
int     check_doubles(char **argv, long nbr, int index);
char    **check_one_arg(char *argv);
void    checking_all(int argc, char **argv);
int		check_sorting(t_list *stack);

//print error on sdterr
void	error_stderr();

//swap two
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);

//push two
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);

//rotate
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);

//reverse rotate
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

//my functions to sort stacks
void	sort_two(t_list **stack);
void	sort_three(t_list **stack);
void	sort_four(t_list **stack_a, t_list **stack_b);	
void	sort_five(t_list **stack_a, t_list **stack_b);
//void	radix(t_list **stack_a, t_list **stack_b);
void	sort_all(t_list **stack_a, t_list **stack_b);

//utils for sorting
void	indexation(t_list **stack);
int     find_min_index(t_list **stack);
int		find_index_position(t_list **stack, int index);
//t_list  *find_min(t_list **stack);
//t_list  *find_next_min(t_list **stack, t_list **last_min);

//use to printf what's inside my stacks
void	printing(t_list *stack);
void    print_index(t_list *stack);
void    print_data(t_list *stack);
#endif
