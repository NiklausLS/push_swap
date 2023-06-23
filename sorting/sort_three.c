/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:59:44 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/23 09:58:51 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//sorts 132 213 231 312 321

void	sort_three(t_list **stack)
{
	if (((*stack)->index < (*stack)->next->index)
		&& ((*stack)->next->index > (*stack)->next->next->index)
		&& ((*stack)->index < (*stack)->next->next->index))
	{
		rra(stack);
		sa(stack);
	}
	else if (((*stack)->index > (*stack)->next->index)
		&& ((*stack)->next->index < (*stack)->next->next->index))
		ra(stack);
	else if (((*stack)->index < (*stack)->next->index)
		&& ((*stack)->index > ((*stack)->next->next->index)))
		rra(stack);
	else if (((*stack)->index > (*stack)->next->index)
		&& ((*stack)->next->index > (*stack)->next->next->index))
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
	sort_three(&stack_a);
	printf("AFTER SORTING\n");
	while (stack_a)
	{
		printf("DATA = %d | INDEX = %d\n", stack_a->data, stack_a->index);
		stack_a = stack_a->next;
	}
	return (0);
}*/
