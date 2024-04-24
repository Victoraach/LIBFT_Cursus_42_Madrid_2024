/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 21:24:02 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/19 21:24:03 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs the string 's' to the file descriptor 'fd'
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*
int main (void)
{
	char *str = "nathan";
	
	int fd;
	fd = open("borrar.txt", O_WRONLY | O_CREAT);

	if (fd == -1)
	{
		perror("Error opening file");
		return 1;
	}

	// Print file descriptor
    printf("El descriptor de archivo (fd) es: %d\n", fd);

	// Write string in file descriptor
	ft_putstr_fd(str, fd);

	// Close fd
    close (fd);

	if (close(fd) == -1)
	{
		perror("Error closing file");
		return 1;
	}
	
	return (0);
}*/