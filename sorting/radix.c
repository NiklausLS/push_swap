/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 08:06:35 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/16 17:53:53 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//get max data in my chained list
/*static int	get_max_data(t_list **stack)
{
	int		max;
	t_list	*head;

	if (*stack == NULL)
		return (0);
	head = *stack;
	max = head->index;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	return (max);
}*/

//get the number of bits i need for radix
static int	get_bits(t_list **stack)
{
	int	max_bits;
	int min;
	int	max;

	max_bits = 0;
	min = get_min_data(stack);
	max = get_max_data(stack);
	
	if (min < 0)
		max_bits++;
	while (max >> max_bits > 0)
		max_bits++;
	return (max_bits);
}

//radix sorting
/*void	radix(t_list **stack_a, t_list **stack_b)
{	
	int	i;
	int	j;
	int	max_data;
	int	bits;
	t_list	*head;

	i = 0;
	head = *stack_a;
	max_data = get_max_data(stack_a);
	bits = get_bits(max_data);
	while (i < bits)
	{
		j = 0;
		while (j < ft_lstsize(*stack_a))
		{
			head = *stack_a;
			if (((head->data >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (ft_lstsize(*stack_b) > 0)
			pa(stack_b, stack_a);
		i++;
	}
}*/

static void	sort_bits(t_list **stack_a, t_list **stack_b, int bit_index)
{
	t_list	*head;
	int		i;

	head = *stack_a;
	i = 0;
	while (i < ft_lstsize(*stack_a))
	{
		head = *stack_a;
		if (((head->data >> bit_index) & 1) == 1)
			ra(stack_a);
		else
			pb(stack_a, stack_b);
		i++;
	}
}

static void	empty_b(t_list **stack_a, t_list **stack_b)
{
	while (*stack_b != NULL)
		pa(stack_b, stack_a);
}

void	radix(t_list **stack_a, t_list **stack_b)
{
	t_list	*head;
	int		max_data;
	int		max_bits;
	int		bit_index;

	head = *stack_a;
	max_data = get_max_data(stack_a);
	max_bits = get_bits(stack_a);
	bit_index = 0;
	while (bit_index < max_bits)
	{
		sort_bits(stack_a, stack_b, bit_index);
		empty_b(stack_a, stack_b);
		bit_index++;
	}
}

int main()
{
	t_list *stack_a = NULL;
	t_list *stack_b = NULL;

	t_list *a1 = malloc(sizeof(t_list));
	a1->data = -100;
//	a1->index = 0;
	a1->next = NULL;

	t_list *a2 = malloc(sizeof(t_list));
	a2->data = 10;
//	a2->index = a1->index + 1;
	a2->next = a1;

	t_list *a3 = malloc(sizeof(t_list));
	a3->data = 1000;
//	a3->index = a2->index + 1;
	a3->next = a2;

	t_list *a4 = malloc(sizeof(t_list));
	a4->data = 1;
//	a4->index = a3->index + 1;
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
}
