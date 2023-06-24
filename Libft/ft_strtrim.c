/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:21:55 by nileempo          #+#    #+#             */
/*   Updated: 2022/12/12 13:29:16 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;
	int		i;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i] = s1[start];
		start++;
		i++;
	}
	if (!str)
		return (NULL);
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char *s1 = "_\n\ttest de la fonction_\n\t";
	char *s2 = "        ";

	char *trim1 = "_\n\t";
	char *trim2 = " ";

	system("leaks a.out");
	printf("s1 : %s\n", ft_strtrim(s1, trim1));
	printf("s2 : %s\n", ft_strtrim(s2, trim2));
	return (0);
}*/
