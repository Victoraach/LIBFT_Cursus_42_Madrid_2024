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

// Returns last concurrence found of 'c' in "s"
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
int main (void)
{
  
	char *str = "Hello, World!";

	printf("\nEl string es: %s", str);
	printf("\nletra es W: %s", ft_strrchr(str, 'W'));
	printf("\nletra es o: %s", ft_strrchr(str, 'o'));
	printf("\nletra es z: %s", ft_strrchr(str, 'z'));
	printf("\nletra es 'vacio': %s", ft_strrchr(str, '\0'));

	return (0);
}*/