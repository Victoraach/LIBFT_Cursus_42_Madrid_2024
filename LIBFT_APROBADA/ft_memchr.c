/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:33:50 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/17 15:59:45 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Searches for a character in a memory block up to a specified length
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_var;

	s_var = (unsigned char *)s;
	while (n--)
		if (*s_var++ == (unsigned char)c)
			return (s_var - 1);
	return (0);
}
/*
int main(void)
{
    char cad[] = "Hola 42";
    char *f;
    int    i = 'a';

    f = ft_memchr(cad, i, 5);
    printf("El caracter se encuentra en la posicion %p \n", (char *) f);
    f = memchr(cad, i, 5);
    printf("El caracter se encuentra en la posicion %p \n", f);
    return(0);
}*/