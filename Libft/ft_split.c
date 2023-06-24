/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:22:18 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/23 14:47:17 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static int	ft_str_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		t;
	char	**tab;

	if (!s)
		return (NULL);
	i = 0;
	t = -1;
	tab = malloc(sizeof(char *) * (ft_str_count(s, c) + 1));
	if (!tab)
		return (NULL);
	while (++t < ft_str_count(s, c))
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		tab[t] = ft_substr(s, j, i - j);
	}
	tab[t] = NULL;
	return (tab);
}
/*int main()
{
	char *s = "test de la      fonction";
	char c = ' ';
	char **tab = ft_split(s, c);

	printf(" test de ft_str_count : %d\n", ft_str_count(s, c));
	printf(" test de ft_split : %s\n", tab[0]);
	free(tab);
	return (0);
}*/
