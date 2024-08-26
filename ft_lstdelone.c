#include "libft.h"
/*
  3 t_list  *ft_lstnew(void *content)
  4 {
  5     t_list  *element;
  6
  7     element = malloc(sizeof(t_list));
  8     if (element == NULL)
  9         return (NULL);
 10     element->content = content;
 11     element->next = NULL;
 12
 13     return (element);
 14 }
 */

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
