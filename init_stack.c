/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:21:08 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/20 12:19:17 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(int argc, char **argv, t_list **stack)
{
	t_list	*new;
	long	i;
	(void)argc;

	i = 1;
	while (argv[i])
	{
		new = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	indexation(stack);
}
/*
int main(int argc, char **argv)
{
	t_list **stack_a;

	stack_a = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	checking(argv);
	init_stack(argc, argv, stack_a);
	sort_three(stack_a);

	printing(*stack_a);
	free(stack_a);

	return (0);
}*/