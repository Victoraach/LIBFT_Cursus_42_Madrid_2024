/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <valvarez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:48:51 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/16 17:21:31 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Sustituye 'c' en 's', tantas veces como indique 'n'
void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		((unsigned char *)s)[n] = (unsigned char)c;
	return (s);
}
/*
#include <stddef.h>
#include <stdio.h>
int	main(void)
{
	char c;
	char str[5] = "Pato";

	c = 'X';
	printf("%s\n", (char *)ft_memset(str, c, sizeof(str) - 2));
	return (0);
}*/
