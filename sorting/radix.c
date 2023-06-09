/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 08:06:35 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/09 11:13:14 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//sort strating to the right and ending to the left

void	radix(t_list **stack_a, t_list **stack_b)
{	
	int	i;
	int	j;
	t_list	*head;

	i = 0;
	j = 0;
	head = *stack_a;

	
		


}

int main()
{
	t_list *stack_a = NULL;
	t_list *stack_b = NULL;

	t_list *a1 = malloc(sizeof(t_list));
	a1->data = 1;
	a1->next = NULL;

	t_list *a2 = malloc(sizeof(t_list));
	a2->data = 2;
	a2->next = NULL;

	t_list *a3 = malloc(sizeof(t_list));
	a3->data = 3;
	a3->next = NULL;

	t_list *a4 = malloc(sizeof(t_list));
	a4->data = 4;
	a4->next = NULL;

	a2->next = a1;
	stack_a = a2;

	a3->next = a2;
	stack_a = a3;

	a4->next = a3;
	stack_a = a4;


	return (0);
}
