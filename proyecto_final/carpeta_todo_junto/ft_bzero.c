/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <valvarez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:24:07 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/16 17:32:35 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Sets 'n' bytes at 's' to zero
void	ft_bzero(void *s, size_t n)
{
	while (n--)
		((char *)s)[n] = 0;
}
/*
#include <stddef.h>
#include <stdio.h>
int	main(void)
{
	char s[5] = "hola";
	size_t i;

	i = 0;
	ft_bzero(s, sizeof(s));
	while (i >= 0 && i < sizeof(s))
	{
		printf("%d", (unsigned char)s[i]);
		i++;
	}
	return (0);
}*/
