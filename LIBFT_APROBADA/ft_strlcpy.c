/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:07:42 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/16 19:54:40 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies 'src' to 'dst' with 'dstsize' limit
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
int main (void)
{
    char src[] = "Hello";
    char dest[6];
    printf ("\ntamaño destino es: %zu", ft_strlcpy(dest, src, sizeof(dest)));
    printf ("\nel destino es: %s", dest);

    char src2[] = "This is a very long string";
    char dest2[10];
    printf ("\ntamaño destino es: %zu", ft_strlcpy(dest2, src2, sizeof(dest2)));
    printf ("\nel destino es: %s", dest2);
    return (0);
}*/