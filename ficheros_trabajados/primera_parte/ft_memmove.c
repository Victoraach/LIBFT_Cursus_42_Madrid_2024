/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:17:52 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/16 19:35:24 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copia 'n' caracteres desde 'src' a 'dst', controlando las superposiciones

static void	overlap_copy(char *dst, char *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_dst;
	char	*c_src;

	if (!dst && !src)
		return (NULL);
	c_dst = (char *)dst;
	c_src = (char *)src;
	overlap_copy (c_dst, c_src, len);
	return (dst);
}

static void	overlap_copy(char *dst, char *src, size_t len)
{
	size_t	i;

	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			i--;
			dst[i] = src[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
}
/*
#include <stddef.h>
int main (void)
{
    char src[] = "Hello";
    char dest[6];
    ft_memmove(dest, src, sizeof(src));
    return (0);
}*/
