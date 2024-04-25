/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:46:34 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/20 19:46:35 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Delete and free node of 'lst' given and all consecutive nodes with 'del' ft
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptrlst;

	if (lst == NULL || del == NULL || *lst == NULL)
		return ;
	while (*lst)
	{
		ptrlst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ptrlst;
	}
	*lst = NULL;
}
/*
int main (void)
{
   
    t_list *node1 = ft_lstnew(strdup("node 1"));
    t_list *node2 = ft_lstnew(strdup("node 2"));
    t_list *node3 = ft_lstnew(strdup("node 3"));
    
    node1->next = node2;
    node2->next = node3;

    printf("\nnode1 = %s\n", (char *) node1->content);

    ft_lstclear(&node2, free);

    t_list *temp = node1;
    while (temp != NULL)
    {
      printf("%s\n", (char *) temp->content);
      temp = temp->next;
    }

    return 0;
}*/