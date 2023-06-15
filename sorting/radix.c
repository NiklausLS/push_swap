/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 08:06:35 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/15 11:13:13 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//get max data in my chained list
static int	max(t_list *stack)
{
	int	max;

	max = stack->data;
	while (stack)
	{
		if (stack->data > max)
			max = stack->data;
		stack = stack->next;
	}
	return (max);
}


/*
void	radix(t_list **stack_a, t_list **stack_b)
{	
	int	i;
	int	j;
	t_list	*head;

	i = 0;
	j = 0;
	head = *stack_a;


		
}*/

/*
int main()
{
	t_list *stack_a = NULL;
//	t_list *stack_b = NULL;

	t_list *a1 = malloc(sizeof(t_list));
	a1->data = -1;
	a1->next = NULL;

	t_list *a2 = malloc(sizeof(t_list));
	a2->data = 999;
	a2->next = NULL;

	t_list *a3 = malloc(sizeof(t_list));
	a3->data = 1000;
	a3->next = NULL;

	t_list *a4 = malloc(sizeof(t_list));
	a4->data = 42;
	a4->next = NULL;

	a2->next = a1;
	stack_a = a2;

	a3->next = a2;
	stack_a = a3;

	a4->next = a3;
	stack_a = a4;

	printf("max = %d\n", max(stack_a));
	return (0);
}*/
