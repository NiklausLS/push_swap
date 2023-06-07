#include "../push_swap.h"

void	print_stack(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		printf("%d | ", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}
