/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:21:38 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/04 18:13:48 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Copia memória
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;

	if (!dest && !src)
		return (NULL);
	pd = (unsigned char *) dest;
	ps = (unsigned char *) src;
	while (n > 0)
	{
		*pd++ = *ps++;
		n--;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	org[] = "hello!";
	char	dest[10];

	ft_memcpy(dest, org, 3);
	dest[3] = '\0';
	printf("Origem: %s \nDestino: %s \n", org, dest);
	return (0);
}*/