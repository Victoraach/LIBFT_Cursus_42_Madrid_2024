/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:57:33 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/17 16:15:02 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compares two memory blocks and returns the difference
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_var1;
	unsigned char	*s_var2;

	s_var1 = (unsigned char *)s1;
	s_var2 = (unsigned char *)s2;
	while (n--)
	{
		if (*s_var1 != *s_var2)
			return (*s_var1 - *s_var2);
		s_var1++;
		s_var2++;
	}
	return (0);
}
/*
int main (void)
{
	char arr1[] = {1, 2, 3};
	char arr2[] = {1, 2, 4};
	printf("diferencia ft: %d\n", ft_memcmp(arr1, arr2, sizeof(arr1)));
	printf("diferencia f: %d\n", memcmp(arr1, arr2, sizeof(arr1)));


	int a = 123;
	int b = 123;
	printf("\ndiferencia ft: %d\n", ft_memcmp(&a, &b, sizeof(int)));
	printf("diferencia f: %d\n", memcmp(&a, &b, sizeof(int)));
	

	char cad1[] = "h4ola";
	char cad2[] = "hola";
	printf("\ndiferencia ft: %d\n", ft_memcmp(cad1, cad2, 7));
	printf("diferencia f: %d\n", memcmp(cad1, cad2, 7));

	return (0);
}*/