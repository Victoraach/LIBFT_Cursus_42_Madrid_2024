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
/*
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
int    main()
{
    char **f = ft_split(" hola mundo 42 !", 'o');
    if (f)
    {
        for (int i = 0; f[i] != NULL; i++)
        {
            printf("%s\n", f[i]);
        }
    }
    return (0);
}*/