/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:29:23 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/17 12:14:25 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Devuelve el tamaño de la cadena que queremos crear, se pueda o no crear
size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dest);
	if (n <= d_len)
		return (n + s_len);
	else
	{
		dest += d_len;
		n -= d_len;
		while (--n && *src)
			*dest++ = *src++;
		*dest = '\0';
		return (d_len + s_len);
	}
}
/*
 * nota: esta funcion intentara crear la cadena nueva, pero en caso de no poder
 * por temas de tamaño del dest, igual nos devuelve el tamaño
 *  de la cadena que intento crear es decir (d_len + s_len)
#include <string.h>
#include <stddef.h>
int    main(void)
{
    char    dest[20] = "nathan";
    char    src[] = "anibal";
    printf("%u\n", ft_strlcat(dest, src, sizeof(dest)));
    printf ("%s\n", dest);
    return (0);
}*/
