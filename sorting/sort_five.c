/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 11:59:53 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/20 17:02:49 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//12345
//12354

void    sort_five(t_list **stack_a, t_list **stack_b)
{
	t_list	*current;
	t_list	*b;

	current = *stack_a;
	b = *stack_b;
	while (current)
	{
    	if (current->index > current->next->index)
		{
			sa(&current);
			ra(&current);
		}
		else 
			ra(&current);
		current = current->next;
	}
}

int main()
{
	t_list	*stack_a = NULL;
	t_list	*stack_b = NULL;

	t_list *a1 = malloc(sizeof(t_list));
	t_list *a2 = malloc(sizeof(t_list));
	t_list *a3 = malloc(sizeof(t_list));
    t_list *a4 = malloc(sizeof(t_list));
    t_list *a5 = malloc(sizeof(t_list));

	a1->index = -1;
	a2->index = -1;
	a3->index = -1;
    a4->index = -1;
    a5->index = -1;

    a1->data = 4;
    a2->data = 2;
    a3->data = 1;
    a4->data = 3;
    a5->data = 5;

	a1->next = a2;
	a2->next = a3;
    a3->next = a4;
    a4->next = a5;
    a5->next = NULL;

    stack_a = a1;
    t_list *test = stack_a;
    printf("--- Before ---\n");
	while (test)
	{
		printf("Index = %d\n", test->index);
		test = test->next;
	}
	printf("INDEXATION\n");
	indexation(&stack_a);
    t_list *a = stack_a;
    while (a)
	{
		printf("Index = %d\n", a->index);
		a = a->next;
	}
    printf("\n--- After ---\n");
    sort_five(&stack_a, &stack_b);
    t_list *current = stack_a;
	while (current)
	{
		printf("Index = %d\n", current->index);
		current = current->next;
	}
	return(0);
} 
