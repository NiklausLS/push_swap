/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 06:43:42 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/22 11:39:25 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

//SA : REVERSE 2 FIRST ELEMENTS IN STACK A
//
//SB : REVERSE 2 FISRT ELEMENTS IN STACK B
//
//SS : BOTH AT THE SAME TIME

void	swap(t_list *stack)
{
	int	tmp_data;
	int	tmp_index;

	if (!stack || !stack->next)
		return ;
	tmp_data = stack->data;
	tmp_index = stack->index;
	stack->data = stack->next->data;
	stack->index = stack->next->index;
	stack->next->data = tmp_data;
	stack->next->index = tmp_index;
}

void	sa(t_list **stack_a)
{
	swap(*stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_list **stack_b)
{
	swap(*stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	write(1, "ss\n", 3);
}
/*
int main()
{
	t_list	**stack_a;
	t_list	**stack_b;
	
 	stack_b = NULL;
	t_list *elem1 = malloc(sizeof(t_list));
	t_list *elem2 = malloc(sizeof(t_list));
	
	elem1->data = 24;
	elem1->index = 1;
	elem1->next = elem2;

	elem2->data = 42;
	elem2->index = 2;
	elem2->next = NULL;
	
	stack_a = &elem1;
	printf("BEFORE SA : \n");
	printf("Elem1 : Data = %d | Index = %d\n", elem1->data, elem1->index);
	printf("Elem2 : Data = %d | Index = %d\n", elem2->data, elem2->index);
	sa(&elem1);
	printf("AFTER SA : \n");
	printf("Elem1 : Data = %d | Index = %d\n", elem1->data, elem1->index);
	printf("Elem2 : Data = %d | Index = %d\n", elem2->data, elem2->index);
	
	return (0);
}*/
