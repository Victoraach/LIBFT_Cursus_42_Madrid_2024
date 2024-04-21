/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:18:49 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/17 17:16:35 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Locates 'needle' in 'haystack' within 'len' characters
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int				i;
	unsigned int	j;

	if (!haystack && !needle)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	j = 0;
	while (haystack[j] && j < n)
	{
		i = 0;
		while (needle[i] == haystack[i + j] && j + i < n)
		{
			if (needle[i + 1] == '\0')
				return ((char *)haystack + j);
			i++;
		}
		j++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int    main()
{
    char cad[] = "Hola mundo 42_12345";
    char scad[] = "mundo";
    char *f;
    char *f2;

    f = ft_strnstr(cad, scad, 20);
    printf("La subcadena se encuentra de %s \n", f);
    //f2 = strnstr(cad, scad, 20);
    //printf("La subcadena se encuentra de %s \n", f2);
    return (0);

}*/
