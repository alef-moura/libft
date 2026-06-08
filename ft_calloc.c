/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 14:33:29 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/08 11:42:17 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total_size;

	total_size = count * size;
	p = malloc(total_size);
	if (p == NULL)
		return (NULL);
	ft_bzero (p, total_size);
	return (p);
}

/*#include <stdio.h>

int	main(void)
{
	int	*array;
	int	tamanho;
	int	i;

	tamanho = 5;
	printf("Solicitando espaço para %d inteiros...\n\n", tamanho);
	}
	return (0);
}*/