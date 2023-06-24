/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:44:24 by nileempo          #+#    #+#             */
/*   Updated: 2023/06/15 06:25:49 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*tmp;

	size = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
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

	t_list *current = list;
	while (current != NULL)
	{
		int *content = (int *)current->content;
		printf("%d ", *content);
		current = current->next;
	}
	printf("\n");

	int size = ft_lstsize(list);
	printf("Taille de la liste : %d\n", size);

	free(elem1);
	free(elem2);
	free(elem3);
	return (0);
}*/
