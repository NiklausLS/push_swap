/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:02:24 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/24 19:41:47 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_nbr(char *argv)
{
	int	i;

	i = 0;
	if (argv[0] == '-' || argv[0] == '+')
		i++;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			error_stderr();
		i++;
	}
	return (0);
}

int	check_minmax(long nbr)
{
	if (nbr > 2147483647 || nbr < -2147483648)
		error_stderr();
	return (0);
}

int	check_doubles(char **argv, long nbr, int index)
{
	int	i;

	i = index + 1;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == nbr)
			error_stderr();
		i++;
	}
	return (0);
}
