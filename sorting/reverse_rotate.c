/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 06:19:20 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/07 15:26:55 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_list **stack)
{
	t_list	*current;
	t_list	*stock;

	if (!(*stack))
		return ;
	current = *stack;
	stock = NULL;
	while (current->next)
	{
		stock = current;
		current = current->next;
	}
	stock->next = NULL;
	current->next = *stack;
	*stack = current;
}

void	rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}

int main()
{
	t_list *stack_a = NULL;

	t_list *a1 = malloc(sizeof(t_list));
	a1->data = 1;
	a1->next = NULL;

	t_list *a2 = malloc(sizeof(t_list));
	a2->data = 2;
	a2->next = NULL;

	t_list *a3 = malloc(sizeof(t_list));
	a3->data = 3;
	a3->next = NULL;

	t_list *a4 = malloc(sizeof(t_list));
	a4->data = 4;
	a4->next = NULL;

	a2->next = a1;
	stack_a = a2;

	a3->next = a2;
	stack_a = a3;

	a4->next = a3;
	stack_a = a4;

	printf("Before RRA\n");
	printf("Stack_a = ");
	t_list *current_a = stack_a;
	while (current_a)
	{
		printf("%d | ", current_a->data);
		current_a = current_a->next;
	}
	printf("\n");
	rra(&stack_a);
	printf("After RRA\n");
	printf("Stack_a = ");
	current_a = stack_a;
	while (current_a)
	{
		printf("%d | ", current_a->data);
		current_a = current_a->next;
	}
	return (0);
}
