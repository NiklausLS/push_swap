/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 08:06:35 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/24 14:54:30 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//get the biggest index in my stack
static int	find_max_index(t_list **stack)
{
	t_list *current;
	int		max;

	current = *stack;
	max = current->index;
	while (current)
	{
		if (current->index > max)
			max = current->index;
		current = current->next;
	}
	return (max);
}

//get the number of bits i need for radix
static int	get_bits(t_list **stack)
{
	int	max_bits;
	int min;
	int	max;

	max_bits = 0;
	min = 0;
	max = find_max_index(stack);
	while (max >> max_bits > 0)
		max_bits++;
	return (max_bits);
}

static void	sort_bits(t_list **stack_a, t_list **stack_b)
{
	t_list	*current;
	int		i;
	
	current = *stack_a;
	i = 0;
	while (i < ft_lstsize(*stack_a))
	{
		current = *stack_a;
		if (((current->index >> i) & 1) == 1)
			ra(stack_a);
		else
			pb(stack_a, stack_b);
		i++;
	}
}

void	radix(t_list **stack_a, t_list **stack_b)
{
	t_list	*current;
	int		max_data;
	int		max_bits;
	int		bit_index;

	current = *stack_a;
//	max_data = get_max_data(stack_a);
	max_bits = get_bits(stack_a);
	bit_index = 0;
	while (bit_index < max_bits)
	{
		sort_bits(stack_a, stack_b);
		while (stack_b)
			pa(stack_b, stack_a);
		bit_index++;
	}
}

/*
int main()
{
	t_list *stack_a = NULL;
	t_list *stack_b = NULL;

	t_list *a1 = malloc(sizeof(t_list));
	a1->data = -100;
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

	printf("max = %d\n", get_max_data(&stack_a));
	
	printf("---- before ----\n");
	print_stack(stack_a);

	printf("---- radix sort ----\n");
	radix(&stack_a, &stack_b);
	print_stack(stack_a);

	free(a1);
	free(a2);
	free(a3);
	free(a4);
	return (0);
}*/
