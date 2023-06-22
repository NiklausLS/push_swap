/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:02:24 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/22 14:25:26 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//#include <stdio.h>

static int	check_nbr(char *argv)
{
	int	i;

	i = 0;
	if (argv[0] == '-')
		i++;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
		{
			error_stderr();
			return (1);
		}
		i++;
	}
	return (0);
}

static int	check_minmax(long nbr)
{
	if (nbr > 2147483647 || nbr < -2147483648)
	{
		error_stderr();
		return (1);
	}
	return (0);
}

static int	check_doubles(char **argv, long nbr, int index)
{
	int	i;

	i = index + 1;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == nbr)
		{
			error_stderr();
			return (1);
		}
		i++;
	}
	return (0);
}

void	checking(char **argv)
{
	int		i;
	long	nbr;

	i = 1;
	while (argv[i])
	{
		check_nbr(argv[i]);
		nbr = ft_atoi(argv[i]);
		check_minmax(nbr);
		check_doubles(argv, nbr, i);
		i++;
	}
}
/*
int main(int argc, char **argv)
{
	(void) argc;
	checking(argv);
}*/
