/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:24:43 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/22 06:28:22 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//check for min data
//push it to b
//sort the last 3
//then push min in top of a

t_list  *sort_four(t_list **stack_a, t_list **stack_b)
{
    t_list  *current;
    int     min;

    current = *stack_a;
    min = find_min_index(stack_a);
	if (min->index == 0)

    while (current)
    {
        if (min == current->index)
            pb(stack_b, stack_a);
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

	a1->index = -1;
	a2->index = -1;
	a3->index = -1;
    a4->index = -1;

    a1->data = 4;
    a2->data = 2;
    a3->data = 1;
    a4->data = 3;

	a1->next = a2;
	a2->next = a3;
    a3->next = a4;
    a4->next = NULL;

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
    sort_four(&stack_a, &stack_b);
    t_list *current = stack_a;
	while (current)
	{
		printf("Index = %d\n", current->index);
		current = current->next;
	}
	return(0);
} 
