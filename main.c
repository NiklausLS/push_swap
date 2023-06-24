/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 07:40:38 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/24 17:55:24 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		return (0);
	stack_a = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_b = NULL;
	checking_all(argc, argv);
	initialisation(argc, argv, stack_a);
	indexation(stack_a);
/*	printf("---BEFORE SORTING---\n");
	printing(*stack_a);*/
	sort_all(stack_a, stack_b);
//	printf("--- Stack_a ---\n");
//	printing(*stack_a);
//	printf("--- Stack_b ---\n");
//	printing(*stack_b);
	if (stack_a)
		free_stack(stack_a);
	if (stack_b)
		free_stack(stack_b);
//	system("leaks push_swap");
	return (0);
}
