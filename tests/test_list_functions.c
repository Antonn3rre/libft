#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	del(void * c)
{
	c = 0;
}

void	add_one(void * c)
{
	int	*d;

	d = (int *)c;
	(*d)++;
}

void	*add_hundred(void * c)
{
	int	*d;

	d = (int *)c;
	(*d)+=100;
	return (c);
}
int main() {
    // Créer une liste avec un élément
    int value1 = 42;
    t_list *list = ft_lstnew(&value1);
    printf("%d\n", ft_lstsize(list));

    // Créer un nouvel élément à ajouter au début de la liste
    int value2 = 24;
    t_list *new_element = ft_lstnew(&value2);

    // Ajouter le nouvel élément au début de la liste
    ft_lstadd_front(&list, new_element);

    // Tester la fonction ft_lstadd_back en ajoutant un élément à la fin
    int value3 = 99;
    t_list *new_element_back = ft_lstnew(&value3);
    ft_lstadd_back(&list, new_element_back);

    // Afficher les contenus des éléments de la liste
    t_list *current = list;
    while (current != NULL) {
        printf("Element content: %d\n", *(int *)(current->content));
        current = current->next;
    }

    printf("Taille : %d\n", ft_lstsize(list));
    t_list *dernier = ft_lstlast(list);
    printf("Dernier : %d\n", *(int *)(dernier->content));

    // Afficher les contenus des éléments de la liste après avoir ajoute +1
    printf("Après avoir ajoute +1 a tout:\n");
    ft_lstiter(list, &add_one);
    current = list;
    while (current != NULL) {
        printf("Element content: %d\n", *(int *)(current->content));
        current = current->next;
    }

    printf("Apres avoir cree une nouvelle liste qui reproduit l'autre +100\n");
    t_list *new;
    new = ft_lstmap(list, &add_hundred, &del);
    current = new;
    while (current != NULL) {
        printf("Element content: %d\n", *(int *)(current->content));
        current = current->next;
    }

    // Libérer la mémoire allouée pour la liste restante
    ft_lstclear(&list, &del);
    return 0;
}
