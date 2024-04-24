/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <valvarez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:19:57 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/16 17:02:13 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns 1 if the character is ASCII printable
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main(void)
{
	int	c;
	int	d;

	c = 47;
	d = 130;

	printf("%d\n", ft_isprint(c));
	printf("%d\n", ft_isprint(d));

	return (0);
}*/