#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));

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

    // Afficher les contenus des éléments de la liste après suppression
    printf("Après suppression du deuxième élément:\n");
    current = list;
    while (current != NULL) {
        printf("Element content: %d\n", *(int *)(current->content));
        current = current->next;
    }
    // Libérer la mémoire allouée pour la liste restante
    ft_lstclear(&list, free);
    return 0;
}
