/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:48:42 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/23 09:27:06 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error_stderr()
{
	write(2, "Error\n", 6);
	exit(1);
}

void	printing(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		printf("DATA = %d | INDEX = %d\n", tmp->data, tmp->index);
		tmp = tmp->next;
	}
	printf("\n");
}

void	print_index(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		printf("index = %d\n", tmp->index);
		tmp = tmp->next;
	}
}

void	print_data(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp)
	{
		printf("data = %d\n", tmp->data);
		tmp = tmp->next;
	}
}
