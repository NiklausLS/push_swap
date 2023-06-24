/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 07:45:01 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/24 21:03:37 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	checking(char **check)
{
	long	nbr;
	int		j;

	j = -1;
	while (check[++j])
	{
		check_nbr(check[j]);
		nbr = ft_atoi(check[j]);
		check_minmax(nbr);
		check_doubles(check, nbr, j);
	}
	free_split(check);
}

void	checking_all(char **argv)
{
	int		i;
	char	**check;

	i = 1;
	while (argv[i])
	{
		check = ft_split(argv[i], ' ');
		if (check == NULL)
			error_stderr();
		else if (check[0] == NULL)
			free(check);
		else
			checking(check);
		i++;
	}
}
