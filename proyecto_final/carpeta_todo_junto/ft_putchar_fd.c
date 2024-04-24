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

// Writes the character 'c' to the given file descriptor 'fd'
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
	return ;
}
/*
int main(void) 
{
	int fd;
	fd = open("example.txt", O_WRONLY | O_CREAT);
	
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}

	// Print file descriptor
	printf("El descriptor de archivo (fd) es: %d\n", fd);

	// Write character in file descriptor
	ft_putchar_fd('a', fd);

	// Close fd
	close (fd);

	if (close(fd) == -1)
	{
		perror("Error closing file");
		return 1;
	}

	return (0);
}*/