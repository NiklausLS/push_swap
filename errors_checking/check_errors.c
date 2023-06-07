/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:02:24 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/07 09:49:46 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_nbr(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{	
			if (!ft_isdigit(argv[i][j]))
			{
				write (2, "Error\n", 6);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

long	check_minmax(long *nbr)
{
	if (*nbr > 2147483647 || *nbr < -2147483648)
	{
		write (2, "Error\n", 6);
		return (0);
	}
	return (*nbr);
}

int	check_doubles(t_list *stack)
{
	t_list	*tmp;
	t_list	*current;

	tmp = NULL;
	current = stack;
	while (current != NULL)
	{
		tmp = current->next;
		while (tmp != NULL)
		{
			if (current->data == tmp->data)
			{
				write (2, "Error\n", 6);
				return (0);
			}
			tmp = tmp->next;
		}
		current = current->next;
	}
	return (1);
}

/*void	check_space(char **argv)
{
	int i;

	i = 0;
	if (argv[1][0] == ' ')
	{
		while (argv[1][i] == ' ')
		i++;
	}
}*/
