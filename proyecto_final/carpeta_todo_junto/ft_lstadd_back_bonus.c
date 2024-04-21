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

// Appends 'new' node at the end of the list 'lst'
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptrlst;

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
/*
#include <stdio.h>
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
*/
