/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:51:07 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/17 12:18:20 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts lower-case letter to its corresponding upper-case
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
int main (void)
{
	char l1 = 'a';
	char l2 = 'B';
	char l3 = '$';

	printf("\nletra mia antes: %c", l1);
	printf("\nletra mia antes: %c", l2);
	printf("\nletra mia antes: %c", l3);

	ft_toupper(l1);
	ft_toupper(l2);
	ft_toupper(l3);

	printf("\nletra mia antes: %c", ft_toupper(l1));
	printf("\nletra mia antes: %c", ft_toupper(l2));
	printf("\nletra mia antes: %c", ft_toupper(l3));

	return (0);
}*/