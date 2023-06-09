/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:59:44 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/09 16:33:49 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//123 132 213 231 312 

void	sort_three(t_list **stack)
{
	//head = 3 / 2 / 1
	if (((*stack)->data > (*stack)->next->data)
		&& ((*stack)->next->data > (*stack)->next->next->data))
	{
		sa(stack);
		ra(stack);
	}
	//head = 3 / 1 / 2
/*	else if (((*stack)->data > (*stack)->next->data)
		&& ((*stack)->data > (*stack)->next->next->data))
	{	
		ra(stack);
		//head = 3 / 2 / 1
		if ((*stack)->data > (*stack)->next->data)
		sa(stack);
	}	

	//312
	else if (((*stack)->data > (*stack)->next->data)
		&& ((*stack)->next->data < (*stack)->next->next->data))
	
	//132
	else if (((*stack)->data < (*stack)->next->data)
		&& ((*stack)->next->data > (*stack)->next->nextdata))
*/	
}

int main()
{
	t_list	*stack_a = NULL;
//	t_list	*stack_b = NULL;

	t_list *a1 = malloc(sizeof(t_list));
	a1->data = 3;
	a1->next = NULL;

	t_list *a2 = malloc(sizeof(t_list));
	a2->data = 2;
	a2->next = NULL;

	t_list *a3 = malloc(sizeof(t_list));
	a3->data = 1;
	a3->next = NULL;

	a1->next = a2;
	a2->next = a3;

	printf("BEFORE SORTING\n");
	stack_a = a1;
	while (stack_a)
	{
		printf(" %d\n", stack_a->data);
		stack_a = stack_a->next;
	}
	printf("AFTER SORTING\n");
	stack_a = a1;
	while (!check_sorting(stack_a))
	{
		sort_three(&stack_a);
		printf("sorting not done");
	}
	while (stack_a)
	{
		printf(" %d\n", stack_a->data);
		stack_a = stack_a->next;
	}
	return (0);
}
