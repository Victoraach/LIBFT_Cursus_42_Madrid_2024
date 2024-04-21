/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:11:06 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/17 12:20:56 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Convierte en minusculas las letras
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
#include <stdio.h>

int main (void){
char l1 = 'a';
char l2 = 'B';
char l3 = '$';
printf("\nletra mia antes: %c", l1);
printf("\nletra mia antes: %c", l2);
printf("\nletra mia antes: %c", l3);
ft_tolower(l1);
ft_tolower(l2);
ft_tolower(l3);
printf("\nletra mia antes: %c", ft_tolower(l1));
printf("\nletra mia antes: %c", ft_tolower(l2));
printf("\nletra mia antes: %c", ft_tolower(l3));
return (0);
}
*/
