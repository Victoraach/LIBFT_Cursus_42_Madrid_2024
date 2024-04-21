/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:13:55 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/18 14:14:12 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Crea una copia de un 's1' con suficiente memoria para alojar dicho 's1'
char	*ft_strdup(const char *s1)
{
	char	*cpy;
	int		i;

	i = 0;
	cpy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (cpy == NULL)
		return (0);
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
#include <stdio.h>
int    main(void)
{
    char *ptr = "hola mundo";
    char *f;

    f = ft_strdup(ptr);
    printf("La copia devuelve %s \n", f);
    return(0);
}
*/
