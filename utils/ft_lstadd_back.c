/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 13:22:43 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/07 09:44:35 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/*int main()
{
	t_list *list = NULL;
	int data1 = 1;
	int data2 = 2;
	int data3 = 3;
	int	data4 = 4;

	t_list *elem1 = malloc(sizeof(t_list));
	t_list *elem2 = malloc(sizeof(t_list));
	t_list *elem3 = malloc(sizeof(t_list));
	t_list *elem4 = malloc(sizeof(t_list));

	elem1->content = &data1;
	elem1->next = NULL;
	elem2->content = &data2;
	elem2->next = NULL;
	elem3->content = &data3;
	elem3->next = NULL;
	elem4->content = &data4;
	elem4->next = NULL;

	ft_lstadd_front(&list, elem1);
	ft_lstadd_front(&list, elem2);
	ft_lstadd_front(&list, elem3);
	ft_lstadd_back(&list, elem4);

	t_list *current = list;
	while (current != NULL)
	{
		int *content = (int *)current->content;
		printf("%d ", *content);
		current = current->next;
	}

	free(elem1);
	free(elem2);
	free(elem3);
	free(elem4);
	return (0);
}*/
