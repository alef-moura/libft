/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 13:07:55 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/12 17:34:52 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//preenche memória com um valor
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

/*#include <stdio.h>

int	main(void)
{
	char	str[5] = "oie!";
	printf("Antes: %s\n", str);
	
	ft_memset(str, '#', 1);
	printf("Depois: %s\n", str);
}*/