/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:55:58 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/20 17:56:00 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Devuelve el último nodo de la lista 'lst'
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
int main ()
{
	t_list *node1 = ft_lstnew("nathan");
	t_list *node2 = ft_lstnew("anibal");
	t_list *node3 = ft_lstnew("alvarez");

	node1->next = node2;
	node2->next = node3;

	t_list *last_node = ft_lstlast(node1);

	if(last_node)
	printf("El último nodo contiene: %s\n", last_node->content);

	return 0;
}
*/
