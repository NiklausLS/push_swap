/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 10:24:55 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/23 11:59:05 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//#include <stdio.h>

t_list	*ft_lstnew(int data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = data;
	new->index = -1;
	new->next = NULL;
	return (new);
}

/*int main()
{
	int	*data;

	data = (int*)malloc(sizeof(int));
	*data = 42;
	t_list *new_node = ft_lstnew(data);
	printf("NEW = %d\n", *(int*)new_node->content);
	printf("NEXT = %p\n", new_node->next);
	free(data);
	free(new_node);
}*/
