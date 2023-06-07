/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 06:18:40 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/07 14:21:16 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//PA : take the 1rst element on top of B and put it on A
//Do nothing if b is empty

void	push(t_list **dest, t_list **src)
{
	t_list	*tmp;

	if (!(*src))
		return ;
	tmp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp;
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	push(stack_b, stack_a);
	write(1, "pb\n", 3);
}
/*
int main()
{
	t_list	*stack_a = NULL;
	t_list	*stack_b = NULL;

	t_list *a1 = malloc(sizeof(t_list));
	a1->data = 1;
	a1->index = 1;
	a1->next = NULL;

	t_list *a2 = malloc(sizeof(t_list));
	a2->data = 2;
	a2->index = 2;
	a2->next = NULL;

	t_list *b1 = malloc(sizeof(t_list));
	b1->data = 11;
	b1->index = 1;
	b1->next = NULL;

	t_list *b2 = malloc(sizeof(t_list));
	b2->data = 22;
	b2->index = 2;
	b2->next = NULL;

	a2->next = a1;
	stack_a = a2;

	b2->next = b1;
	stack_b = b2;
	
	printf("Before PA\n");
	printf("Stack_a = ");
	t_list *current_a = stack_a;
	while (current_a)
	{
		printf("%d | ", current_a->data);
		current_a = current_a->next;
	}
	printf("\n");
	printf("Stack_b = ");
	t_list *current_b = stack_b;
	while (current_b)
	{
		printf("%d | ", current_b->data);
		current_b = current_b->next;
	}
	printf("\n");
	pa(&stack_a, &stack_b);

	printf("AFTER PA\n");
	printf("Stack A: ");
	current_a = stack_a;
	while (current_a != NULL)
	{
		printf("%d |", current_a->data);
		current_a = current_a->next;
	}
	printf("\n");
	printf("Stack B: ");
	current_b = stack_b;
	while (current_b != NULL)
	{
		printf("%d | ", current_b->data);
		current_b = current_b->next;
	}
	printf("\n");
	return (0);
}*/
