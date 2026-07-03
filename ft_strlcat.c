/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:35:10 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/22 13:05:41 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//junta duas strings com seguranca
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < dstsize)
		dst_len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	i = 0;
	while (src[i] != '\0' && (dst_len + i < dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*#include <stdio.h>

int	main(void)
{
	char	dst[10] = "Ola";
	char	*src = "Mundo";
	size_t	buffer = 10;
	size_t retorno;

	printf("dst inicial: %s \n", dst);
	printf("src inicial: %s \n", src);
	printf("Buffer: %zu \n", buffer);

	retorno = ft_strlcat(dst, src, buffer);
	printf("dst final: %s \n", dst);
	printf("valor retornado pela função: %zu \n", retorno);
	return (0);
}*/