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

// Check if char 'c' is in 'set'. checks in start and finsh of str
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;
	size_t	len;

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
/*
int	main(void)
{
	char const *cad1 = "HolaaalHo";
    char const *can1 = "H";
    char *f1;
    f1 = ft_strtrim(cad1, can1);
    printf("Devuelve: |%s| \n", f1);

    char const *cad2 = "k/ksk/ 2pp2 sk/kjdk/ ";
    char const *can2 = "k/ ";
    char *f2;
    f2 = ft_strtrim(cad2, can2);
    printf("Devuelve: |%s| \n", f2);

	return (0);
}*/