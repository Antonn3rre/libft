#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*current;

	i = 0;
	current = lst;
	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
