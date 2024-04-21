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

// Applies function 'f' to each char of string 's' with index
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
{
	i = 0;
	while (*s >= 'a' && *s <= 'z')
		s[0] -= 32;
}
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
int main ()
{
	char str [] = "nathan";

	printf("antes: %s\n", str);
	ft_striteri(str, test_function);
    printf("despues: %s\n", str);
	return (0);
}
*/
