/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:51:44 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/19 12:51:46 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Applies function 'f' to each char of string 's'. Modify the source str
void	ft_striteri(char *s, void (*f)(unsigned	int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void test_function(unsigned int i, char *s) 
{
	i = 0;
	while (*s >= 'a' && *s <= 'z')
		s[0] -= 32;
}

int main ()
{
	char str [] = "nathan";

	printf("Referencia: %s\n", str);
    printf("antes de aplicar ft: %s\n", str);
    ft_striteri(str, test_function);
	printf("despues de aplicar ft: %s\n", str);

	return (0);
}*/