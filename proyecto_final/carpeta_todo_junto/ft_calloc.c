/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:13:32 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/17 18:38:21 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates zero-initialized memory for 'count' elements of 'size'.
void	*ft_calloc(size_t count, size_t size)
{
	void			*buff;
	unsigned char	*ptrbuff;
	size_t			szmem;

	if (count != 0 && SIZE_MAX / count < size)
		szmem = SIZE_MAX;
	szmem = (unsigned int)count * size;
	buff = (void *) malloc(szmem);
	if (buff == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ptrbuff = (unsigned char *) buff;
	while (szmem--)
		*ptrbuff++ = 0;
	return (buff);
}
/*
int	main(void)
{
	int	*buff;
	int	i;

	i = 0;
	buff = calloc (4, sizeof(int));
	buff[0] = 23;
	buff[1] = -6;
	buff[2] = 23564;
	buff[3] = -5548;
	printf("\n");
	printf("Array de enteros con memoria reservada con ft_calloc(): ");
	while (i < 4)
	{
		printf(" %d ", buff[i]);
		i++;
	}
	printf("\n");
}*/