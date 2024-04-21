/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:16:01 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/20 18:16:03 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

typedef struct s_list
{
    void            *content;
    struct s_list    *next;
}                    t_list;

// Crear nuevo nodo con 'contenido'
t_list    *ft_lstnew(void *content)
{
    t_list    *head;

    head = malloc(sizeof(t_list));
    if (!head)
        return (NULL);
    head->content = content;
    head->next = NULL;
    return (head);
}

// Agrega el nodo 'nuevo' al final de la lista 'lst'
void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list    *ptrlst;

    if (lst == NULL || new == NULL)
        return ;
    ptrlst = *lst;
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    while (ptrlst->next != NULL)
        ptrlst = ptrlst->next;
    ptrlst->next = new;
}

int main ()
{
    t_list *node1 = ft_lstnew("Nodo_1");
    t_list *node2 = ft_lstnew("Nodo_2");
    t_list *new = ft_lstnew("nodo nuevo");

    node1->next = node2;
    node2->next = NULL;
    new->next = NULL;
    
    ft_lstadd_back(&node1, new);
    
    printf("%s\n", (char *)node1->next->next->content);

    return 0;
}
