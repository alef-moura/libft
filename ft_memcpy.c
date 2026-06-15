/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:21:38 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/15 16:18:26 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
