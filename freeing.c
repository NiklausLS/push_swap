/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freeing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:27:19 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/24 12:52:57 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	while (i >= 0)
	{
		free(split[i]);
		i--;
	}
	free(split);
}

void	free_stack(t_list **stack)
{
	t_list	*current;
	t_list	*next_node;

	current = *stack;
	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
