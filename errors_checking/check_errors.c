/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:02:24 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/22 16:21:36 by nileempo         ###   ########.fr       */
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
			printf("erreur nbr");
			//error_stderr();
		}
		i++;
	}
	return (0);
}

static int	check_minmax(long nbr)
{
	if (nbr > 2147483647 || nbr < -2147483648)
		printf("erreur minmax\n");
		//error_stderr();
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
			printf("erreur doubles\n");
			error_stderr();
		}
		i++;
	}
	return (0);
}

void	checking(char **argv)
{
	long	nbr;
	int		i;
	char	**str;

	nbr = 0;
	i = 1;
	str = argv;
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
