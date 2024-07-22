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

// Appends 'src' to 'dst' of size 'dstsize'
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
int    main(void)
{
    char    dest[20] = "nathan";
    char    src[] = "anibal";
    printf("%zu\n", ft_strlcat(dest, src, sizeof(dest)));
    printf ("%s\n", dest);
    return (0);
}*/