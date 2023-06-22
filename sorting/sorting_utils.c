/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:28:18 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/22 14:25:01 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//check the position of my nodes by using the index as parameter
//and returns it
int	find_index_position(t_list **stack, int index)
{
	t_list	*current;
	int		pos;
	
	current = *stack;
	pos = 0;
	while (current)
	{
		if (current->index == index)
			break;
		pos++;
		current = current->next;
	}
	return (pos);
}

//check the tinyest index in the stack
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

/*
int	find_max_index(t_list **stack)
{
	t_list	*current;
	r_list	*max;

	current = *stack;
	max = *stack;
	while (current)
		if (current->index > max->index)
			max->index = current->index;
	current = current->next;
	}
	return (max->index);
}*/

/*
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
    a3->index = 4;
    a4->index = -1;
    a5->index = -1;

	a1->next = a2;
	a2->next = a3;
    a3->next = a4;
    a4->next = a5;
    a5->next = NULL;
    stack_a = a1;

    indexation(&stack_a);
    //int a = find_min_index(&stack_a);
	int pos = find_index_position(&stack_a, 4);
    printf("a = %d", pos);

	return (0);
}*/
