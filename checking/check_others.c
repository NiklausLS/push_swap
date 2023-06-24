/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_others.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 07:32:52 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/24 19:39:48 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//check if there is only one arguments and split it in many
char	**check_one_arg(char *argv)
{
	char	**split;

	split = ft_split(argv, ' ');
	return (split);
}

/*int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	char **test = sort_one(argv[i]);

	if (argc != 2)
	{
		printf("args error\n");
		exit(1);
	}
	else	
		while (test[j])
		{
			printf("j = %d | %s\n", j, test[j]);
			j++;
		}
	free(test);
	return (0);
}*/
