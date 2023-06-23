/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 07:40:38 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/23 16:48:03 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <sys/types.h>


int main(int argc, char **argv)
{
	t_list **stack_a;
	t_list **stack_b;

	if (argc < 2)
		return (0);
	stack_a = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_b = NULL;
	checking_all(argc, argv);

	initialisation(argc, argv, stack_a);

	indexation(stack_a);

	sort_all(stack_a, stack_b);

//	printing(*stack_a);
//	printing(*stack_b);

	free_node(stack_a);
	free_node(stack_b);

	system("leaks push_swap");
	return (0);
}
