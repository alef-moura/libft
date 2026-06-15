/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 13:07:55 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/15 16:01:10 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s1;
	size_t			i;

	s1 = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		s1[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
