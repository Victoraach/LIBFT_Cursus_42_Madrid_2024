/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:24:35 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/17 12:39:38 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns first concurrence found of 'c' in "s"
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
/*
int main (void){
  
char *str = "Hello, World!";

printf("\nEl string es: %s", str);
printf("\nletra es W: %s", ft_strchr(str, 'W'));
printf("\nletra es o: %s", ft_strchr(str, 'o'));
printf("\nletra es z: %s", ft_strchr(str, 'z'));
printf("\nletra es 'vacio': %s", ft_strchr(str, '\0'));
return (0);
}*/