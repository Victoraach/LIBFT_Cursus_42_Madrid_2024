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
int	main(void)
{
	char	c;
	char	d;

    c = '1';
	d = 'R';

	printf("%d\n", ft_isdigit(c));
	printf("%d\n", ft_isdigit(d));

	return (0);
}*/