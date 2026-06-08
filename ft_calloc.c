/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 14:33:29 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/08 13:07:23 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Reserva memória e inicializa com zero
void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total_size;

	if (count != 0 && size > (size_t)-1 / count)
		return (NULL);
	total_size = count * size;
	p = malloc(total_size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, total_size);
	return (p);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	*array;
	int	tamanho;
	int	i;

	tamanho = 4;
	printf("--- TESTE 1: ALOCAÇÃO NORMAL E LIMPEZA ---\n");

	// Solicitando espaço para 4 inteiros (4 * 4 bytes = 16 bytes)
	array = (int *)ft_calloc(tamanho, sizeof(int));

	if (array == NULL)
	{
		printf("Erro: A alocação normal falhou!\n\n");
		return (1);
	}

	// Provando que a ft_bzero limpou tudo
	i = 0;
	while (i < tamanho)
	{
		printf("Posicao [%d]: %d (Esperado: 0)\n", i, array[i]);
		i++;
	}
	
	// Sempre liberar a memória alocada com sucesso!
	free(array);
	printf("Memoria do Teste 1 liberada.\n\n");
	return (0);
}*/
