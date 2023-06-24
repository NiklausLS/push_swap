/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:24:43 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/24 13:26:12 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_four(t_list **stack_a, t_list **stack_b, int i)
{
	while (!check_sorting(*stack_a) && ft_lstsize(*stack_a) > 3)
	{
		if ((*stack_a)->index == i)
			pb(stack_b, stack_a);
		else
			ra(stack_a);
	}
	sort_three(stack_a);
	pa(stack_b, stack_a);
}

/*
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

    a1->data = 3;
    a2->data = 1;
    a3->data = 0;
    a4->data = 2;

	a1->next = a2;
	a2->next = a3;
    a3->next = a4;
    a4->next = NULL;

    stack_a = a1;
    t_list *test = stack_a;
    printf("--- Before ---\n");
	while (test)
	{
		printf("Data = %d | Index = %d\n", test->data, test->index);
		test = test->next;
	}
	printf("--- INDEXATION ---\n");
	indexation(&stack_a);
    t_list *a = stack_a;
    while (a)
	{
		printf("Data = %d | Index = %d\n", a->data, a->index);
		a = a->next;
	}
    printf("\n\n--- Calling sort_four ---\n");
    sort_four(&stack_a, &stack_b);
    t_list *s_a = stack_a;
	t_list *s_b = stack_b;
	printf("--- Stack_a ---\n");
	while (s_a)
	{
		printf("Data = %d | Index = %d\n", s_a->data, s_a->index);
		s_a = s_a->next;
	}
	printf("--- Stack_b ---\n");
	while (s_b)
	{
		printf("Data = %d | Index = %d\n", s_b->data, s_b->index);
		s_b = s_b->next;
	}
	return(0);
}*/
