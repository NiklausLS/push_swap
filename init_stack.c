/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:21:08 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/23 08:41:42 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialisation(int argc, char **argv, t_list **stack)
{
	t_list	*new;
	long	i;
	char	**str;

	i = 1;
	if (argc == 2)
		str = ft_split(argv[i], ' ');
	else
		str = argv;
	while (str[i])
	{
		new = ft_lstnew(ft_atoi(str[i]));
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
