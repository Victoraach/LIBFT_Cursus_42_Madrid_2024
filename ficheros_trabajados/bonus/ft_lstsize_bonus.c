/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:35:05 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/20 17:35:07 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Cuenta el número de nodos en la lista 'lst'
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
#include <stdio.h>
int main ()
{
	t_list *node1 = ft_lstnew("nathan");
	t_list *node2 = ft_lstnew("anibal");

	node1->next = node2;

	int size_lst = ft_lstsize(node1);

	printf("El tamaño de la lista es %d\n", size_lst);

	return 0;
}
*/
