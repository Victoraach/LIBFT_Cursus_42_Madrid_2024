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

// Moves 'n' bytes from 'src' to 'dst', yes overlaps
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
/*
int    main(void)
{
  	char *string;
	char *cadena;  
	char *refe;

	refe = strdup("0123456789");
	cadena = strdup("0123456789");
  	string = strdup("0123456789");
  
	printf("Nuestra referencia incial es: %s\n", refe);
    printf("5c ft_memmove(): %s\n", ft_memmove(&string[3], &string[0], 5));
	printf("5c memcpy(): %s\n", memmove(&cadena[3], &cadena[0], 5));
    
    return (0);
}*/
