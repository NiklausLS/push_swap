/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:35:15 by nileempo          #+#    #+#             */
/*   Updated: 2022/12/12 13:18:34 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;
	size_t	slen;

	i = 0;
	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	str = malloc(sizeof(char) * (slen + 1));
	if (!str)
		return (NULL);
	while (i < slen)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
