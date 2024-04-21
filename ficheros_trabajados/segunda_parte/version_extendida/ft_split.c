/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:14:48 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/18 17:14:57 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

// Devuelve la longitud de la cadena
size_t	ft_strlen(const char *s)
{
	const char	*cpy;

	cpy = s;
	while (*s)
		s++;
	return (s - cpy);
}

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

// Copia de 'src' a 'dst' con un limite de caracteres 'dstsize'
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

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

// Cuenta el numero de cadenas que vamos a tener
size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (count);
}

// Cuenta la longitud de cada subcadena que tenemos
size_t	ft_words_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		free (str[i]);
		i++;
	}
	free (str);
}

// Hacemos la division para obtener las subcadenas
char	**ft_do_split(char const *s, char c, char **str, size_t words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		str[i] = ft_substr(s, j, (ft_words_len (&s[j], c)));
		if (!str[i])
			return (ft_free(str), NULL);
		while (s[j] != '\0' && s[j] != c)
			j++;
		i++;
	}
	str[i] = NULL;
	return (str);
}

// Separa una cadena 's' en subcadenas, cortando por 'c'
char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (words + 1));
	if (!str)
		return (NULL);
	str = ft_do_split(s, c, str, words);
	return (str);
}

int    main(void)
{
    char **f = ft_split(" hola.mundo.42!", '.');
    if (f)
    {
        for (int i = 0; f[i] != NULL; i++)
        {
            printf("%s\n", f[i]);
        }
    }
    return (0);
}