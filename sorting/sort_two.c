/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:24:32 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/20 17:34:03 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_list **stack)
{
	t_list	*current;

	current = *stack;
	if (current->data > current->next->data)
		sa(stack);
}

int main()
{
	t_list	**stack_a;

 	stack_a = NULL;
	t_list *elem1 = malloc(sizeof(t_list));
	t_list *elem2 = malloc(sizeof(t_list));

	elem1->data = 24;
	elem1->index = 1;
	elem1->next = elem2;

	elem2->data = 42;
	elem2->index = 2;
	elem2->next = NULL;

	stack_a = &elem1;
	printf("BEFORE SA : \n");
	printf("Elem1 : Data = %d | Index = %d\n", elem1->data, elem1->index);
	printf("Elem2 : Data = %d | Index = %d\n", elem2->data, elem2->index);
	sa(&elem1);
	printf("AFTER SA : \n");
	printf("Elem1 : Data = %d | Index = %d\n", elem1->data, elem1->index);
	printf("Elem2 : Data = %d | Index = %d\n", elem2->data, elem2->index);
	return (0);
}
