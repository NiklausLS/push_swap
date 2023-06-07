/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:19:13 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/07 09:43:19 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	if (lst == NULL)
		return (NULL);
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

/*int main()
{
	t_list *list = NULL;
	int data1 = 1;
	int data2 = 2;
	int data3 = 3;

	t_list *elem1 = malloc(sizeof(t_list));
	t_list *elem2 = malloc(sizeof(t_list));
	t_list *elem3 = malloc(sizeof(t_list));

	elem1->content = &data1;
	elem1->next = NULL;
	elem2->content = &data2;
	elem2->next = NULL;
	elem3->content = &data3;
	elem3->next = NULL;

	ft_lstadd_front(&list, elem3);
	ft_lstadd_front(&list, elem2);
	ft_lstadd_front(&list, elem1);

	t_list *last = ft_lstlast(list);
	if (last != NULL)
	{
		int	*lastelem = (int *)last->content;
		printf("Last element is : %d\n", *lastelem);
	}
	else 
		printf("The list is empty");

	free(elem1);
	free(elem2);
	free(elem3);
	return (0);
}*/
