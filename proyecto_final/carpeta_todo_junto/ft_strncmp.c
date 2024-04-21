/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:41:36 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/17 14:32:15 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compares 's1' and 's2' for 'n' characters, returning the difference
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2 || *s1 == 0 || *s2 == 0)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include <stddef.h>
int main(void)
{
	    char s1[] = "cadh";
	    char s2[] = "cade";
	    int n = 5;
	    printf("el valor mi funcion es: %d\n", ft_strncmp(s1, s2, n));
		printf("el valor mi funcion original: %d\n", strncmp(s1, s2, n));
	    return (0);
}*/
