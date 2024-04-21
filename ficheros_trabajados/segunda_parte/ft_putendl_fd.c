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

// Envía la cadena 's' al  file escriptor 'fd', seguido nueva línea.
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main ()
{
	char *str = "nat han";
    
    int fd;

    fd = open("borrar.txt", O_WRONLY | O_CREAT);
    if (fd == -1)
    {
        perror("Error opening file");
        return 1;
    }
    ft_putendl_fd(str, fd);

    if (close(fd) == -1)
    {
        perror("Error closing file");
        return 1;
    }
    return (0);
}
*/
