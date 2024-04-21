/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <valvarez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:07:59 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/16 16:48:54 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns 1 if character is a digit, 0 otherwise
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>
int	main()
{
	
	char    c;
    char   d;
    c = 'R';
    d = '1';

	printf("%d\n", ft_isdigit(c));
	printf("%d\n", ft_isdigit(d));
	return (0);
}*/
