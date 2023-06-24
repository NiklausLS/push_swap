/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 07:45:01 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/24 13:16:20 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	checking_all(int argc, char **argv)
{
	long	nbr;
	int		i;
	char	**check;

	nbr = 0;
	i = 1;
	if (argc == 2)
		check = check_one_arg(argv[i]);
	else
		check = argv;
	while (check[i])
	{
		check_nbr(check[i]);
		nbr = ft_atoi(check[i]);
		check_minmax(nbr);
		check_doubles(check, nbr, i);
		i++;
	}
	if (argc == 2)
		free_split(check);
}
