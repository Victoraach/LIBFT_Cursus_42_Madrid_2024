/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:30:04 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/19 16:30:06 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

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

int main ()
{
    t_list *new_list = ft_lstnew("Hello, World!");
    t_list *empty_element = ft_lstnew(NULL);

    printf("Contenido de la new_list: %s\n", (char *)new_list->content);
    if (empty_element->content)
        printf("empty_content: %s\n", (char *)empty_element->content);
    else
        printf("empty_element está vacío.\n");

    free(new_list);
    
    free(empty_element);

    return 0;
}

