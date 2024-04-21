/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <valvarez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:06:16 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/16 16:43:45 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns 1 if character is alphabetic, 0 otherwise
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
#include <stdio.h>
int	main(void)
{
	char	c;
	charr	d;
	c = 'R';
	d = '1';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", ft_isalpha(d));
	return (0);
}*/
