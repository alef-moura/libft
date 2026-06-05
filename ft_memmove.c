/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 12:21:27 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/04 18:13:40 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Copia memoria com segurança em areas sobrepostas
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	pdest = (unsigned char *) dest;
	psrc = (unsigned char *) src;
	i = 0;
	if (dest > src)
	{
		while (n-- > 0)
			pdest[n] = psrc[n];
	}
	else
	{
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	text[20] = "abcdefg";

	printf("Antes: %s\n", text);

	ft_memmove(text + 2, text, 2);

	printf("Depois: %s\n", text);

	return (0);
}*/