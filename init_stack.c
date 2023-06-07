/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:21:08 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/07 09:46:42 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	new_node(t_list **head, int nbr)
{
	t_list	*new;
	t_list	*current;

	new = malloc(sizeof(t_list));
	new->data = nbr;
	new->next = NULL;
	//if stack is empty, new node becomes the head of the stack
	if (*head == NULL)
		*head = new;
	//else i go to the end of the list
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		//and i add the new node at the end of the list
		current->next = new;
	}
}

t_list	init_stack(int argc, char **argv)
{
	t_list	*stack;
	int		i;
	long	data;

	stack = NULL;
	i = 1;
	while (i < argc)
	{
		data = ft_atoi(argv[i]);
		check_minmax(&data);
		new_node(&stack, data);
		i++;
	}
	check_nbr(argv);
	check_doubles(stack);
	return (*stack);
}
