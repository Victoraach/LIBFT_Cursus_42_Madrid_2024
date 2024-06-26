/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:59:48 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/17 12:51:26 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Busca la ultima coincidencia de 'c' en 's', y a partir de ahi pinta
char	*ft_strrchr(const char *s, int c)
{
	char			*last_occurrence;
	unsigned char	uc;

	uc = (unsigned char)c;
	last_occurrence = 0;
	while (*s)
	{
		if (*s == uc)
			last_occurrence = (char *)s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (last_occurrence);
}

/*
 * Nota: tener en cuenta que la ft_strchr.c se para en la primera conincidencia,
 * mientras que esta buscara en toda la cadena y pintará a partir  de 
 * la última que encuentre
#include <stdio.h>

int main (void){
  
char *str = "Hello, World!";

printf("\nletra es: %s", ft_strrchr(str, 'W'));
printf("\nletra es: %s", ft_strrchr(str, 'o'));
printf("\nletra es: %s", ft_strrchr(str, 'z'));
printf("\nletra es: %s", ft_strrchr(str, '\0'));
return (0);
}
*/
