/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:28:18 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/20 14:28:19 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int find_min_index(t_list **stack)
{
    t_list  *current;
    t_list  *min;

    current = *stack;
    min = *stack;
    while (current)
    {
        if (current->index < min->index)
            min->index = current->index;
        current = current->next;
    }
    return (min->index);
}

int main()
{
	t_list	*stack_a = NULL;

	t_list *a1 = malloc(sizeof(t_list));
	t_list *a2 = malloc(sizeof(t_list));
	t_list *a3 = malloc(sizeof(t_list));
    t_list *a4 = malloc(sizeof(t_list));
    t_list *a5 = malloc(sizeof(t_list));

	a1->data = 2;
	a2->data = 3;
	a3->data = 5;
    a4->data = 4;
    a5->data = 1;

    a1->index = -1;
    a2->index = -1;
    a3->index =-1;
    a4->index = -1;
    a5->index = -1;

	a1->next = a2;
	a2->next = a3;
    a3->next = a4;
    a4->next = a5;
    a5->next = NULL;
    stack_a = a1;

    indexation(&stack_a);
    int a = find_min_index(&stack_a);
    printf("a = %d", a);

	return (0);
}