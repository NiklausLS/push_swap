/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 07:40:38 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/07 17:19:58 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list **stack_a;
	t_list **stack_b;

	stack_a = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	stack_b = malloc(sizeof(t_list));
	*stack_b = NULL;

	if (argc < 2)
		return (0);
	init_stack(argc, argv, stack_a);
	print_stack(*stack_a);
	
	free(stack_a);
	return (0);
}
