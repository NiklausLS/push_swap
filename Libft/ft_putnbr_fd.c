/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 08:58:52 by nileempo          #+#    #+#             */
/*   Updated: 2022/12/07 10:21:44 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar_fd(n + '0', fd);
	}
}
/*
int main()
{
	ft_putnbr_fd(-2147483648, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(0, 1);
	return (0);
}*/
