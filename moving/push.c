/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 06:18:40 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/22 13:24:37 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//PA : take the 1rst element on top of B and put it on A
//Do nothing if b is empty

static void	push(t_list **dest, t_list **src)
{
	t_list	*tmp;

	if (!(*src))
		return ;
	tmp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp;
}

void	pa(t_list **dest, t_list **src)
{
	push(dest, src);
	write(1, "pa\n", 3);
}

void	pb(t_list **dest, t_list **src)
{
	push(dest, src);
	write(1, "pb\n", 3);
}

/*
int main()
{
	t_list	*stack_a = NULL;
	t_list	*stack_b = NULL;

	t_list *a1 = malloc(sizeof(t_list));
	a1->data = 3;
	a1->index = -1;
	a1->next = NULL;

	t_list *a2 = malloc(sizeof(t_list));
	a2->data = 2;
	a2->index = -1;
	a2->next = NULL;

	t_list *a3 = malloc(sizeof(t_list));
	a3->data = 1;
	a3->index = -1;
	a3->next = NULL;

	t_list *a4 = malloc(sizeof(t_list));
	a4->data = 0;
	a4->index = -1;
	a4->next = NULL;

	a1->next = a2;
	a2->next = a3;
	a3->next = a4;
	a4->next = NULL;

	stack_a = a1;
	indexation(&stack_a);

	printf("Before PA\n");
	printf("----Stack_a----\n");
	t_list *current_a = stack_a;
	while (current_a)
	{
		printf("DATA = %d | INDEX = %d\n", current_a->data, current_a->index);
		current_a = current_a->next;
	}
	printf("\n");
	printf("****Stack_b****\n");
	t_list *current_b = stack_b;
	while (current_b)
	{
		printf("DATA = %d | INDEX = %d\n", current_b->data, current_b->index);
		current_b = current_b->next;
	}
	printf("\n");
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);

	printf("After pa\n");
	printf("----Stack A----\n");
	current_a = stack_a;
	while (current_a != NULL)
	{
		printf("DATA = %d | INDEX = %d\n", current_a->data, current_a->index);
		current_a = current_a->next;
	}
	printf("\n");
	printf("****Stack_b****\n");
	current_b = stack_b;
	while (current_b != NULL)
	{
		printf("DATA = %d | INDEX = %d\n", current_b->data, current_b->index);
		current_b = current_b->next;
	}
	printf("\n");
	return (0);
}*/
