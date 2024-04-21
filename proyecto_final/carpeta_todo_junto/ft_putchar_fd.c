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
