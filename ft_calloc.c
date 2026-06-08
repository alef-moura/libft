/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 14:33:29 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/07 14:40:07 by alesferr         ###   ########.fr       */
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

#include <stdio.h>

int	main(void)
{
	int	*array;
	int	tamanho;
	int	i;

	tamanho = 5;
	printf("--- TESTE: ALOCANDO E LIMPANDO MEMÓRIA ---\n");
	printf("Solicitando espaço para %d inteiros...\n\n", tamanho);

	// Chamamos a sua função para alocar o array
	// sizeof(int) garante o tamanho exato de bytes que um inteiro ocupa (geralmente 4 bytes)
	array = (int *)ft_calloc(tamanho, sizeof(int));

	// Proteção regulamentar: se faltar memória no PC, o ponteiro vem NULL
	if (array == NULL)
	{
		printf("Erro: Falha Crítica ao alocar memória com ft_calloc!\n");
		return (1);
	}

	// Vamos varrer o array e printar o que está guardado lá dentro.
	// Como a calloc "limpa" a memória, TODOS devem aparecer zerados!
	i = 0;
	while (i < tamanho)
	{
		printf("Posicao [%d]: %d (Esperado: 0)\n", i, array[i]);
		i++;
	}

	// --- COLOCANDO DADOS DE VERDADE SÓ PARA PROVAR QUE FUNCIONA ---
	printf("\nPreenchendo o array com multiplos de 10...\n");
	i = 0;
	while (i < tamanho)
	{
		array[i] = (i + 1) * 10;
		printf("Novo valor na Posicao [%d]: %d\n", i, array[i]);
		i++;
	}

	// REGRA DE OURO DA MEMÓRIA: Tudo que sobe com malloc/calloc, desce com free!
	// Sempre libere a memória alocada para evitar vazamento de memória (Memory Leak)
	free(array);
	printf("\nMemoria liberada com sucesso!\n");

	return (0);
}