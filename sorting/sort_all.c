/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:57:51 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/22 14:30:06 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_all(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	check;

	size = ft_lstsize(*stack_a);
	check = check_sorting(*stack_a);
	if (check == 1)
		return ;
	if (size == 2)
	{
		sort_two(stack_a);
	//	printf("strating sort_two\n");
	}
	else if (size == 3)
	{
		sort_three(stack_a);
	//	printf("strating sort_three\n");
	}
	else if (size == 4)
	{
		sort_four(stack_a, stack_b);
	//	printf("starting sort_four\n");
	}
	else if (size == 5)
	{
		sort_five(stack_a, stack_b);
	//	printf("starting sort_five\n");
	}
}

/*
int main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	stack_a = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_b = NULL;

//	checking(argv);
	init_stack(argc, argv, stack_a);
	sort_all(stack_a, stack_b, argc);
	//sort_three(stack_a);

	printing(*stack_a);
	free(stack_a);

	return (0);
}*/