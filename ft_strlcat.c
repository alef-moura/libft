/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:35:10 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/08 11:42:33 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//junta duas strings com seguranca
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;

	dst_len = 0;
	while (dst[dst_len] != '\0')
	{
		dst_len++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		*dst = *dst + *src;
		i++;
	}
}
