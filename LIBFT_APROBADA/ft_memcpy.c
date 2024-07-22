/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <valvarez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:29:19 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/16 17:50:54 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies 'n' bytes from 'src' to 'dst', no overlap
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((const char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int    main(void)
{
    char    dst_memcpy[] = "¡Hola mundo!";
    char    src_memcpy[] = "¡Adios Edmundo!";

    printf("Prueba de ft_memcpy()\n");
    printf("*** Copiamos %s en %s ***\n", src_memcpy, dst_memcpy);
    printf("5 caracteres memcpy() %s\n", memcpy(dst_memcpy, src_memcpy, 5));
    printf("5 caracts ft_memcpy() %s\n", ft_memcpy(dst_memcpy, src_memcpy, 5));
    printf("8 caracteres memcpy() %s\n", memcpy(dst_memcpy, src_memcpy, 8));
    printf("8 caracts ft_memcpy() %s\n", ft_memcpy(dst_memcpy, src_memcpy, 8));
    printf("*** Copiamos %s en %s ***\n", NULL, NULL);
    printf("8 caracteres memcpy() %s\n", memcpy(NULL, NULL, 8));
    printf("8 caracteres ft_memcpy() %s\n", ft_memcpy(NULL, NULL, 8));
    
    return (0);
}*/