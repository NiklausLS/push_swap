/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:28:18 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/24 08:58:49 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//check the tinyest index in the stack
int	find_min_index(t_list **stack)
{
	t_list	*current;
	t_list	*min_current;
	int		min;

	current = *stack;
	min_current = *stack;
	min = min_current->index;
	while (current)
	{
		if (current->index < min_current->index)
		{
			min_current->index = current->index;
			min_current->data = current->data;
		}
		current = current->next;
	}
	min = min_current->index;
	return (min);
}

//check the position of a particular index in my stack
int	find_index_position(t_list **stack)
{
	t_list	*current;
	int		pos;
	int		min;

	current = *stack;
	pos = 0;
	min = find_min_index(&current);
	printf("min = %d\n", min);
	while (current)
	{
		printf("test boucle\n");
		printf("current->data = %d | current->index = %d\n", current->data, current->index);
		if (current->index != min)
		{
			current = current->next;
			pos++;
		}
		else
			break ;
	}
	printf("pos = %d\n", pos);
	return (pos);
}
/*
void	push_index(t_list **stack_a, t_list **stack_b)
{
	int		pos;

	pos = find_index_position(stack_a);
	if (pos == 1)
		sa(stack_a);
	else if (pos == 2)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (pos == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (pos == 4)
		rra(stack_a);
	pb(stack_a, stack_b);
}*/

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
	t_list	*stack_b = NULL;

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

    a1->index = 0;
    a2->index = 2;
    a3->index = 4;
    a4->index = 1;
    a5->index = 3;

	a1->next = a2;
	a2->next = a3;
    a3->next = a4;
    a4->next = a5;
    a5->next = NULL;
    stack_a = a1;

	printing(stack_a);
	//int min = find_min_index(&stack_a);
	printf("---BEFORE PUSH---\n");
	//printf("min index = %d\n", min);
	int pos = find_index_position(&stack_a);
	//printf("index position = %d\n", pos);
	pa(&stack_a, &stack_b);
	printing(stack_a);
	printf("---AFTER PUSH---\n");
	//min = find_min_index(&stack_a);
	//printf("min index = %d\n", min);
	pos = find_index_position(&stack_a);
	//printf("index position = %d\n", pos);
	
 //   indexation(&stack_a);
    //int a = find_min_index(&stack_a);
	//int min = find_min_index(&stack_a);
    //printf("a = %d", min);

	return (0);
}
*/