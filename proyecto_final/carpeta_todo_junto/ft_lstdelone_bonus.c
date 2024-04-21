/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:31:45 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/20 18:32:47 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Deletes and frees a node 'lst', using 'del' for content
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *str3 = "Nodo numero 3";
    char *str2 = "Nodo numero 2";
    char *str1 = "Nodo numero 1";
    
    t_list  *node1 = ft_lstnew(str1);
    t_list  *node2 = ft_lstnew(str2);
    t_list  *node3 = ft_lstnew(str3);
    
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    
    void    delete_content(void *content)
    {
      free(content);
    }
    
    void    function_print(t_list *lst)
    {
      while (lst)
      {
        printf("%s\n", (char *)(lst->content));
        lst = lst->next;
      }
    }
    
    
    printf("Lista Antes:\n");
    function_print(node1);
    
    ft_lstdelone(node3, free);
    ft_lstdelone(node3, delete_content);
    
    printf("Lista Despues:\n");
    function_print(node1);
    
    return (0);
}
*/
