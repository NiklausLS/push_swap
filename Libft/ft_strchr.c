/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:52:49 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/24 19:53:43 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	if (c == '\0')
		return (ptr + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == (char)c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char *s = "abcdefghijklmnopqrstuvwxyz";
	int c = 't';

	printf("Vraie fonction : %s\n", strchr("teste", 1024));
	printf("Ma fonction : %s\n", ft_strchr("teste", 1024));
	return (0);
}*/
