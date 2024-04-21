/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:50:39 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/20 19:50:40 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>


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


// Elimina y libera un nodo 'lst', usando 'del' para el contenido
void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst == NULL || del == NULL)
        return ;
    del(lst->content);
    free(lst);
}

// Aplica la función 'f' al contenido de cada nodo en 'lst'
void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst == NULL || f == NULL)
        return ;
    while (lst != NULL)
    {
        f(lst->content);
        lst = lst->next;
    }
}

// Devuelve la longitud de la cadena
size_t    ft_strlen(const char *s)
{
    const char    *cpy;

    cpy = s;
    while (*s)
        s++;
    return (s - cpy);
}


// Crea una copia de un 's1' con suficiente memoria para alojar dicho 's1'
char    *ft_strdup(const char *s1)
{
    char    *cpy;
    int        i;

    i = 0;
    cpy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (cpy == NULL)
        return (0);
    while (s1[i])
    {
        cpy[i] = s1[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}



void    duplicate_function(void *content)
{
    char *str = (char *)content;
    char *duplicated = ft_strdup(str);

    printf("%s\n", duplicated);
    free(duplicated);
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
    t_list *lst = ft_lstnew("hola");
    ft_lstadd_back(&lst, ft_lstnew(" como "));
    ft_lstadd_back(&lst, ft_lstnew("estas"));

    ft_lstiter(lst, duplicate_function);

    return 0;
}