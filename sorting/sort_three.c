/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:59:44 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/24 08:24:02 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//sorts 132 213 231 312 321

void	sort_three(t_list **stack)
{
	t_list *first = *stack;
	t_list *second = (*stack)->next;
	t_list *third = (*stack)->next->next;

	if ((first->index < second->index) && (second->index > third->index)
		&& (first->index < third->index))
	{
		rra(stack);
		sa(stack);
	}
	else if ((first->index > second->index) && (first->index < third->index))
		sa(stack);
	else if ((first->index > second->index) && (second->index < third->index)
		&& (first->index > third->index))
		ra(stack); 
	else if ((first->index < second->index) && (first->index > third->index))
		rra(stack);
	else if ((first->index > second->index) && (second->index > third->index))
	{
		ra(stack);
		sa(stack);
	}
}

/*
int main()
{
	t_list	*stack_a = NULL;
//	t_list	*stack_b = NULL;

	t_list *a1 = malloc(sizeof(t_list));
	a1->index = 2;
	a1->data = 2;
	a1->next = NULL;

	t_list *a2 = malloc(sizeof(t_list));
	a2->index = 1;
	a2->data = 1;
	a2->next = NULL;

	t_list *a3 = malloc(sizeof(t_list));
	a3->index = 0;
	a3->data = 0;
	a3->next = NULL;

	a1->next = a2;
	a2->next = a3;

	printf("BEFORE SORTING\n");
	stack_a = a1;
	while (stack_a)
	{
		printf("DATA = %d | INDEX = %d\n", stack_a->data, stack_a->index);
		stack_a = stack_a->next;
	}
	stack_a = a1;
//	while (!check_sorting(stack_a))
	sort_three(stack_a);
	printf("AFTER SORTING\n");
	while (stack_a)
	{
		printf("DATA = %d | INDEX = %d\n", stack_a->data, stack_a->index);
		stack_a = stack_a->next;
	}
	return (0);
}*/
