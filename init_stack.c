/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 09:21:08 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/24 13:19:19 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialisation(int argc, char **argv, t_list **stack)
{
	t_list	*new;
	int		i;
	char	**str;

	if (argc == 2)
	{
		str = ft_split(argv[1], ' ');
		i = 0;
	}
	else
	{
		str = argv;
		i = 1;
	}
	while (str[i])
	{
		new = ft_lstnew(ft_atoi(str[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	if (argc == 2)
		free_split(str);
}

/*
int main(int argc, char **argv)
{
	t_list **stack_a;

	stack_a = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	checking_all(argv);
	initialisation(argc, argv, stack_a);
//	sort_three(stack_a);

	printing(*stack_a);
//	free(stack_a);

	return (0);
}*/
