/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:23:21 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/19 21:23:23 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Adds 'new' node to the beginning of the list 'lst'
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst ||!new)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}
/*
int main (void)
{
    t_list *lst = NULL;
    
    t_list *new_node1 = ft_lstnew("Hola1");
    ft_lstadd_front(&lst, new_node1);
    
    t_list *new_node2;
    new_node2 = ft_lstnew("Hola2");
    ft_lstadd_front(&lst, new_node2);

    t_list *current = lst;
    while (current != NULL)
    {
        printf("%s\n", (char *)current ->content);
        current = current->next;
    }

    return 0;
}*/