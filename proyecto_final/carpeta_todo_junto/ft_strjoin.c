/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:01:46 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/18 12:58:39 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies string 'src' to 'dst', including null-terminator
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_size;
	char	*join;
	int		i;

	i = 0;
	total_size = sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1);
	join = (char *)malloc(total_size);
	if (join == NULL)
		return (0);
	while (*s1)
		join[i++] = *s1++;
	while (*s2)
		join[i++] = *s2++;
	join[i] = '\0';
	return (join);
}

/*
#include <stdio.h>
#include <stddef.h>

int main (void){
	
char str1[] = "Hello, ";
char str2[] = "World!";
	
printf("\nel valor del join es: %s\n", ft_strjoin(str1, str2));
printf("\nel valor del empty_join es: %s\n", ft_strjoin(NULL, str2));


return (0);
}
*/
