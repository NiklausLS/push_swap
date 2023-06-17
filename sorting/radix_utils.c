/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 17:38:05 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/16 19:12:08 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

//find the lowest data in my chained list
int	find_min_data(t_list **stack)
{
	t_list	*current;
	int		min;

	current = *stack;
	min = INT_MAX;
	while (current)
	{
		if (current->data < min)
			min = current->data;
		current = current->next;
	}
	//printf("\n ---- min = %d ---- \n", min);
	return (min);
}

int	find_next_min(t_list **stack, int last_min)
{
	t_list	*current;
	t_list	*tmp;
	int	min;

	current = *stack;
	tmp = *stack;
	min = INT_MAX;
	while (tmp)
	{
		while (current)
		{
			if(current->data > tmp->data && current->data > last_min && current->data < min)
				min = current->data;
			current = current->next;
		}
		tmp = tmp->next;
	}
	//printf("\n---- Next_min = %d ----\n", min);
	return (min);
}

void	indexation(t_list **stack)
{
	t_list	*current;
	t_list	*tmp;
	int		index;
	int		min;
	int		next_min;

	current = *stack;
	index = -1;
	min = find_min_data(stack);
	while (current)
	{
		if (current->data == min)
			current->index = index;
		current = current->next;
	}
	current = *stack;
	while (current)
	{
		tmp = *stack;
		next_min = find_next_min(&tmp, min);
		printf("min = %d\n", min);
		min = next_min;
		printf("next_min = %d\n", next_min);
		while (tmp)
		{
			if (tmp->data == next_min)
			{
				current->index = index++;
				break ;
			}
			tmp = tmp->next;
		}
		current = current->next;
	}
}

void print_i(t_list *stack) {
    t_list *current = stack;
    while (current) {
        printf("Data = %d, Index = %d\n", current->data, current->index);
        current = current->next;
    }
}

int main()
{
	t_list *stack_a = NULL;

	t_list *a1 = malloc(sizeof(t_list));
	a1->data = 100;
	a1->index = -1;
	a1->next = NULL;

	t_list *a2 = malloc(sizeof(t_list));
	a2->data = 10;
	a2->index = -1;
	a2->next = a1;

	t_list *a3 = malloc(sizeof(t_list));
	a3->data = 1000;
	a3->index = -1;
	a3->next = a2;

	t_list *a4 = malloc(sizeof(t_list));
	a4->data = 1;
	a4->index = -1;
	a4->next = a3;
	stack_a = a4;

	printf("---- BEFORE ----\n\n");
	print_i(stack_a);
	printf("---- AFTER ----\n\n");
	indexation(&stack_a);

	int a = find_min_data(&stack_a);
	int b = find_next_min(&stack_a, a);
	int c = find_next_min(&stack_a, b);
	int d = find_next_min(&stack_a, c);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %d\n", d);

	print_i(stack_a);

	free(a1);
	free(a2);
	free(a3);
	free(a4);
	return (0);
}