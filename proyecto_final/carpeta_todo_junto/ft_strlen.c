/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <valvarez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:36:16 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/16 17:09:28 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns the length of the null-terminated string 's'
size_t	ft_strlen(const char *s)
{
	const char	*cpy;

	cpy = s;
	while (*s)
		s++;
	return (s - cpy);
}
/*
int	main(void)
{
	char	str[10] = "123456789";
	int resultado;

	resultado = ft_strlen(str);
	printf("tenemos una tamaño de %d en el array\n", resultado);
	return(0);
}*/