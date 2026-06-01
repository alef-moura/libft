/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 17:21:38 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/01 17:45:57 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Copia memória
void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *pd;
	unsigned char *ps;

	pd = (unsigned char *) dest;
	ps = (unsigned char *) src;
	if (pd == NULL && ps == NULL)
		return (dest);
	while (dest < n)
}