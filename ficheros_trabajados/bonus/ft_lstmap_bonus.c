/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:53:20 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/20 19:53:21 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Crea una nueva lista aplicando 'f' a cada elemento de 'lst'
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;
	void	*function_value;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		function_value = f(lst->content);
		new_node = ft_lstnew(function_value);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			del(function_value);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void	*duplicate_function(void *content)
{
	char	*str;
	char	*duplicated;

	str = (char *)content;
	duplicated = ft_strdup(str);
	printf("%s\n", duplicated);
	return (duplicated);
}
void	del_function(void *content)
{
	free(content);
}
int main()
{
	t_list *lst = ft_lstnew(ft_strdup("nathan"));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup(" anibal ")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("alvarez")));

	t_list *new_lst = ft_lstmap(lst, duplicate_function, del_function);

	t_list *temp = new_lst;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}

	return 0;	
}*/
