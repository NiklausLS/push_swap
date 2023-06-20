/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:38:05 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/20 12:12:37 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//find the lowest data in my chained list
static t_list	*find_min_data(t_list **stack)
{
	t_list	*current;
	t_list	*min;
	int		check;

	min = NULL;
	current = *stack;
	check = 0;
	if (!stack)
		exit(0);
	while (current)
	{
		if ((current->index == -1) && (check == 0 || current->data < min->data))
		{
			min = current;
			check++;
		}
		current = current->next;
	}
	return (min);
}

/*t_list	*find_max_data(t_list	**stack)
{
	t_list	*current;
	t_list	*max;

	current = *stack;
	max = *stack;
	if(!stack)
		exit(0);
	while (current)
	{
		if (current->data > max->data)
			max->data = current->data;
		current = current->next;
	}
	return (max);
}*/

//initialise an index on my nodes from min to max
void	indexation(t_list **stack)
{
	t_list	*current;
	int		index;

	index = 0;
	current = find_min_data(stack);
	while (current)
	{
		current->index = index++;
		current = find_min_data(stack);
	}
}

/*
int main()
{
	t_list	*stack_a = NULL;
	t_list *a1 = malloc(sizeof(t_list));
	t_list *a2 = malloc(sizeof(t_list));
	t_list *a3 = malloc(sizeof(t_list));
	t_list *a4 = malloc(sizeof(t_list));

	a1->data = 2;
	a2->data = -3;
	a3->data = 0;
	a4->data = 1;

	a1->index = -1;
	a2->index = -1;
	a3->index = -1;
	a4->index = -1;

	a1->next = a2;
	a2->next = a3;
	a3->next = a4;
	a4->next = NULL;

	stack_a = a1;

	printf("--- Before indexation ---\n");
	t_list *test = stack_a;
	while (test)
	{
		printf("Data = %d | Index = %d\n", test->data, test->index);
		test = test->next;
	}
	indexation(&stack_a);

	printf("--- After indexation ---\n");
	t_list *current = stack_a;
	while (current)
	{
		printf("Data = %d | Index = %d\n", current->data, current->index);
		current = current->next;
	}

	free(a1);
	free(a2);
	free(a3);
	free(a4);
	return (0);
}*/
