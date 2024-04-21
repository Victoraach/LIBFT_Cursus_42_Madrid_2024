/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:13:32 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/17 18:38:21 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Asigna memoria inicializada a cero 'count' elementos de tamaño 'size'
void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(size * count);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
/*
 * Nota: con malloc reservas o creas los huecos de memoria que necesitas
 * y luego como es un calloc.c los tenemos que rellenar con CEROS/ '\0'
 * y eso lo hacemos con el ft_bzero.c
#include <stddef.h>
int	main()
{
	char *p;
	p = ft_calloc(5, 2);
	write(1, p, 10);
	write(1, "\n", 1);
	return(0);
}*/
