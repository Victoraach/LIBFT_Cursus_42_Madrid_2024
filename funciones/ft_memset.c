/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <valvarez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:48:51 by valvarez          #+#    #+#             */
/*   Updated: 2024/03/13 17:46:48 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	unsigned char	*dst;

	dst = s;
	while (n > 0)
	{
		*dst = (unsigned char) c;
		dst++;
		n--;
	}
	return (s);
}
/*
Sustituye en el S lo que valga C tantas veces como indique N
La N es de tipo size_t para probar debemos poner INT

int main() {
    char str[] = "Hello, world!";
    memset(str, '*', 5);
    printf("Después de memset: %s\n", str);
    return 0;
}*/
