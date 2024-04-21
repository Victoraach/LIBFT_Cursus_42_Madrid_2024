/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:22:39 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/19 13:22:41 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Escribe el carácter 'c' en el descriptor de archivo dado 'fd'
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
	return ;
}
/*
// Nota: acordarse que el fd es a partir del 4 para asignar el 
// numero para la primera variable del write, que los 3 primeros
// estan reservados para 'a.out' 'a.int' 'error'
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main() 
{
	int fd;
	fd = open("example.txt", O_WRONLY | O_CREAT);
	
	if (fd == -1)
	{
	
	return (1);

	}
		ft_putchar_fd('1', fd);
	
	close (fd);

	return (0);
    
}
*/
