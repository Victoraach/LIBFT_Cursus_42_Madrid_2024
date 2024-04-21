/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <valvarez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:17:11 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/16 17:33:29 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Comprueba si el caracter es ASCII. Devuelve 1 si lo es y 0 si no lo es
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
int	main()
{
	unsigned char	c;

	c = 127;
	printf("%d\n", ft_isascii(c));
	return (0);
}*/
