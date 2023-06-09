/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:02:57 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/09 16:37:06 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sorting(t_list *stack)
{
	while (stack && stack->next)
	{
		if (stack->data > stack->next->data)
		{
			printf("sorting not OK");
			return (0);
		}
		stack = stack->next;
	}
		printf("sorting OK\n");
	return (1);	
}
