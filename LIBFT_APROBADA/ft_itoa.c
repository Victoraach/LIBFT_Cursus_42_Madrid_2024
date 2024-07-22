/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:24:50 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/19 11:24:53 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Calculates 'base' raised to the power of 'exp'
static size_t	get_digits(int n)
{
	size_t	i;

	if (n <= 0)
		i = 1;
	else
		i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

// Converts an integer 'n' into a null-terminated string
char	*ft_itoa(int n)
{
	char		*str_num;
	size_t		digits;
	long int	num;

	num = n;
	digits = get_digits(n);
	if (n < 0)
	{
		num *= -1;
	}
	str_num = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str_num)
		return (NULL);
	*(str_num + digits) = 0;
	while (digits--)
	{
		*(str_num + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str_num + 0) = '-';
	return (str_num);
}
/*
int main(void) 
{
    int n1 = -2147483648;
	//int n2 = 2147483647;
	//int n3 = -214;
	//int n4 = 14;
	
	char *str = ft_itoa (n1);
	//char *str = ft_itoa (n2);
	//char *str = ft_itoa (n3);
	//char *str = ft_itoa (n4);
	
	if (str == NULL) 
    printf("Error al convertir el número %d a cadena.\n",(n1));
	
	printf("%s\n", str); 
	free(str);
	
	return (0);
}*/