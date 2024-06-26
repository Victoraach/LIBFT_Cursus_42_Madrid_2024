/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:11:47 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/19 12:11:54 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Devuelve la longitud de la cadena
size_t    ft_strlen(const char *s)
{
    const char    *cpy;

    cpy = s;
    while (*s)
        s++;
    return (s - cpy);
}

//Crea una nueva cadena a partir de 's', cada carácter es modificado por 'f'
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t    len;
    char    *result;
    int        i;

    if (!s || !f)
        return (NULL);
    i = 0;
    len = ft_strlen(s);
    result = malloc(sizeof(char) * (len + 1));
    if (!result)
        return (NULL);
    while (s[i])
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}

//Nota: Aqui pasamos el indice de caracter y el valor del propio caracter
char test_function(unsigned int i, char c) 
{
	i = 0;
	while ( c >= 'a' && c <= 'z') 
		c -= 32;
		return (c);
}

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
	const char *str = "nathan";
    
    printf("antes: %s\n", str);
    printf("despues: %s\n", ft_strmapi(str, test_function));
    return 0;
}

