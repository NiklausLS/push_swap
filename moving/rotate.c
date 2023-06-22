/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 06:18:51 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/22 13:26:13 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Move up 1 position all elements of stack_a
//First element becomes last

//RA : print ra
void	ra(t_list **stack_a)
{
	t_list	*first;
	t_list	*last;

	first = *stack_a;
	*stack_a = first->next;
	last = ft_lstlast(*stack_a);
	last->next = first;
	first->next = NULL;
	write(1, "ra\n", 3);
}

//RB : print rb
void	rb(t_list **stack_b)
{
	t_list	*last;

	last = ft_lstlast(*stack_b);
	last->next = *stack_b;
	*stack_b = (*stack_b)->next;
	last->next->next = NULL;
	write(1, "rb\n", 3);
}

//RR : do both
void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	write(1, "rr\n", 3);
}
/*
int main()
{
	t_list *stack_a = NULL;
	t_list *a1 = malloc(sizeof(t_list));
	a1->data = 1;
	a1->index = -1;
	a1->next = NULL;

	t_list *a2 = malloc(sizeof(t_list));
	a2->data = 2;
	a2->index = -1;
	a2->next = NULL;

	t_list *a3 = malloc(sizeof(t_list));
	a3->data = 3;
	a3->index = -1;
	a3->next = NULL;

	t_list *a4 = malloc(sizeof(t_list));
	a4->data = 0;
	a4->index = -1;

	a1->next = a2;
	a2->next = a3;
	a3->next = a4;
	a4->next = NULL;
	stack_a = a1;

	indexation(&stack_a);
	printf("Before RA\n");
 
	printf("Stack_a before RA\n");
	t_list *current_a = stack_a;
	while (current_a)
	{
		printf("DATA = %d | INDEX = %d\n", current_a->data, current_a->index);
		current_a = current_a->next;
	}

	printf("\n");
	ra(&stack_a);
	ra(&stack_a);
	printf("After RA\n");
	printf("Stack_a\n");
	t_list *a = stack_a;
	while (a)
	{
		printf("data = %d | index = %d\n", a->data, a->index);
		a = a->next;
	}
	return (0);
}*/
