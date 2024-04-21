/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:54:43 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/18 13:54:46 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Busca la primera concurrencia que haya de 'c' en 's', a partir de ahi pinta
char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if (*s == (char)c)
        return ((char *)s);
    return (0);
}

// Devuelve la longitud de la cadena
size_t  ft_strlen(const char *s)
{
    const char  *cpy;

    cpy = s;
    while (*s)
        s++;
    return (s - cpy);
}

// Crea una copia de un 's1' con suficiente memoria para alojar dicho 's1'
char    *ft_strdup(const char *s1)
{
    char    *cpy;
    int     i;

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

// Copia de 'src' a 'dst' con un limite de caracteres 'dstsize'
size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    if (size != 0)
    {
        while (i < size - 1 && src[i])
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    while (src[i])
        i++;
    return (i);
}

// Crea un substring a partir de 's' desde un 'start' y con un una long 'len'
char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    char    *ret;

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

// Crea una nueva cadena a partir de 's1' quitando el 'set' de amobs extremos
char    *ft_strtrim(char const *s1, char const *set)
{
    char    *result;
    size_t    start;
    size_t    end;
    size_t    len;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    len = end - start;
    result = ft_substr(s1, start, len);
    return (result);
}

#include <stddef.h>
int    main()
{
    char const *cad1 = "Holaaa";
    char const *can1 = "Ho";
    char *f1;
    f1 = ft_strtrim(cad1, can1);
    printf("Devuelve: |%s| \n", f1);


    char const *cad2 = "k/ksk/ 2pp2 sk/kjdk/ ";
    char const *can2 = "k/ ";
    char *f2;
    f2 = ft_strtrim(cad2, can2);
    printf("Devuelve: |%s| \n", f2);

    return (0);
}