/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:10:59 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/18 12:06:11 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Crea un substring a partir de 's' desde un 'start' y con un una long 'len'
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (0);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
/*
#include <stdio.h>
#include <stddef.h>

int main (void){

	const char *str = "Separame esta cadena";
    
    printf("\nel valor del empty_substring es: %s\n", ft_substr(NULL, 0, 10));
    printf("subcadena:'%s'\n", ft_substr(str, 10, 5));

    return 0 ;

}
*/
