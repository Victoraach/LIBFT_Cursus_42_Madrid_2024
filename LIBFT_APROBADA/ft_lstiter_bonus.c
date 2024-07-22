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

#include "libft.h"

// Applies function 'f' to the content of each node in 'lst'
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	duplicate_function(void *content)
{
	char *str = (char *)content;
	char *duplicated = ft_strdup(str);

	printf("%s\n", duplicated);
	free(duplicated);
}

int main (void)
{
	t_list *lst = ft_lstnew("hola");
    ft_lstadd_back(&lst, ft_lstnew("como"));
    ft_lstadd_back(&lst, ft_lstnew("estas"));

	ft_lstiter(lst, duplicate_function);

	return 0;
}*/
