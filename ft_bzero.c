/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 15:51:29 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/01 17:28:40 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//zera a memória
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*b;
	size_t			i;

	b = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		b[i] = 0;
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	char	b[10];
	size_t	i;

	strcpy(b, "hello");
	printf("Antes do ft_bzero: %s \n", b);

	ft_bzero(b, 2);
	printf("Depois do ft_bzero: \n");
}*/