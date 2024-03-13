/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valvarez <valvarez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:29:19 by valvarez          #+#    #+#             */
/*   Updated: 2024/03/13 17:47:59 by valvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
Esto lo que hace es meter en DEST la cantidad de texto de SRC
que marquemos nosotros no el N. 
La N e I es tipo size_t, para probar tenemos que poner INT

int main() {
    const char src[] = "Hola, mundo!";
    char dest[20]; // Espacio suficiente para almacenar los datos
    ft_memcpy(dest, src, 5); // Copia los primeros 5 caracteres
    dest[5] = '\0'; // Añade el carácter nulo al final
    printf("dest: %s\n", dest);
    return 0;

	//d[i] = '\0'; para poder cerrar el destino porque sino da error
    //en caso de no hacer el main con la linea 37, se pone en la linea 29
}*/
