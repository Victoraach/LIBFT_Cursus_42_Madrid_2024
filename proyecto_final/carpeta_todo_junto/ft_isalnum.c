/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <valvarez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:11:26 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/16 16:54:15 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns 1 if the character is alphanumeric (a-z, A-Z, or 0-9), 0 otherwise
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) == 1 || ft_isdigit(c) == 1);
}
/*
#include <stdio.h>
int	main()
{
	char	c;

	c = 'R';
	printf("%d\n", ft_isalnum(c));
	return (0);
}*/
