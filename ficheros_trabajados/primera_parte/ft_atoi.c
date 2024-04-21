/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:46:22 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/17 18:03:13 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Parsea string a integer, teniendo en cuenta si hay signos y si son seguidos
int	ft_atoi(const char *str)
{
	unsigned int	num;
	int				i;
	int				np;

	np = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			np = -1;
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (np * num);
}
/*
#include <stdio.h>
#include <stdlib.h>
int    main()
{
    int fake1;
    int fake2;
    int fake3;
    int org1;
    int org2;
    int org3;

    fake1 = ft_atoi("++---2147");
    fake2 = ft_atoi("-2147");
    fake3 = ft_atoi("+2147");
    
    org1 = atoi("++---2147");
    org2 = atoi("-2147");
    org3 = atoi("+2147");
    printf("Fake1: %d || Fake2: %d|| Fake3: %d\n",fake1, fake2, fake3);
    printf("Ori1: %d || Ori2: %d || Ori3: %d\n", org1, org2, org3);
    return(0);
}*/
