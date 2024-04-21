/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:45:45 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/19 15:45:47 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Escribe el carácter 'c' en el descriptor de archivo dado 'fd'
void    ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
    return ;
}

// Escribe el número entero 'n' en el file descriptor 'fd'
void	ft_putnbr_fd(int n, int fd)
{
	if (n >= -2147483647 && n <= 2147483647)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= (-1);
		}
		if (n < 10)
			ft_putchar_fd(n + '0', fd);
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(n % 10 + '0', fd);
		}
	}
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
}

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
		ft_putnbr_fd(34, fd);
	
	close (fd);

	return (0);
    
}