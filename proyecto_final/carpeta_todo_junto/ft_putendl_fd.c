/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:59:28 by valvarez          #+#    #+#             */
/*   Updated: 2024/04/19 13:59:30 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Outputs string 's' to file descriptor 'fd', followed by a newline
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
int main (void)
{
	char *str = "nathan";
    
    int fd;
    fd = open("borrar.txt", O_WRONLY | O_CREAT);
    
    if (fd == -1)
    {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Print file descriptor
    printf("El descriptor de archivo (fd) es: %d\n", fd);

    // Write string in file descriptor
    ft_putendl_fd(str, fd);

    // Close fd
    close (fd);

    if (close(fd) == -1)
    {
        perror("Error closing file");
        return 1;
    }

    return (0);
}*/