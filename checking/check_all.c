/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 07:45:01 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/24 19:42:12 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	checking_all(char **argv)
{
	long	nbr;
	int		i;
	int		j;
	char	**check;

	nbr = 0;
	i = 1;
	while (argv[i])
	{
		check = ft_split(argv[i], ' ');
		if (check == NULL)
			error_stderr();
		else if (check[0] == NULL)
			free(check);
		j = 0;
		while (check[j++])
		{
			check_nbr(check[j]);
			nbr = ft_atoi(check[j]);
			check_minmax(nbr);
			check_doubles(check, nbr, j);
		}
		free_split(check);
		i++;
	}
}
