#include "../push_swap.h"

void	printing(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		printf("DATA = %d | INDEX = %d\n", tmp->data, tmp->index);
		tmp = tmp->next;
	}
	printf("\n");
}

/*void	print_index(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		printf("index = %d\n", tmp->index);
		tmp = tmp->next;
	}
}*/

