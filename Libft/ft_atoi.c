/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:55:35 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/07 17:14:35 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	long	i;
	int		neg;
	long	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * neg);
}

/*int main()
{
	const char *t = "--123 blabla456";
	const char *t2 = "--123 blablabla456";
	printf("Vraie fonction : %d\n", atoi(t));
	printf("Ma fonction : %d\n", ft_atoi(t2));
	return (0);
}*/
