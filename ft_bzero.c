/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 15:51:29 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/04 18:14:22 by alesferr         ###   ########.fr       */
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
	//String com texto dentro
	char	text[10] = "hello!";
	
	printf("Antes da funcao: %s \n", text);
	//chamando a funcao para zerar os 2 primeiros bytes
	ft_bzero(text, 2);
	printf("Depois da funcao: %s \n", &text[2]);
	return (0);
}*/