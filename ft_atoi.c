/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 13:39:36 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/07 14:32:20 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Converte string para inteiro (char * em int)
int	ft_atoi(const char *str)
{
	int	i;
	int	sinal;
	int	resultado;

	i = 0;
	sinal = 1;
	resultado = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultado = (resultado * 10) + (str[i] - '0');
		i++;
	}
	return (resultado * sinal);
}

/*#include <stdio.h>

int	main(void)
{
	printf("--- TESTE 1: NUMERO SIMPLES ---\n");
	printf("Sua funcao: %d\n\n", ft_atoi("42"));

	printf("--- TESTE 2: ESPAÇOS E SINAL NEGATIVO ---\n");
	// Tem que ignorar os espaços, pegar o menos e converter o 99
	printf("Sua funcao: %d\n\n", ft_atoi("   \t  -99"));

	printf("--- TESTE 3: TEXTO NO MEIO ---\n");
	// Tem que converter o 123 e parar assim que achar o 'p', ignorando o "porto"
	printf("Sua funcao: %d\n\n", ft_atoi("123porto456"));

	printf("--- TESTE 4: SINAL DUPLO (CASO DE ERRO) ---\n");
	// A atoi oficial não aceita dois sinais. Deve retornar 0.
	printf("Sua funcao: %d\n\n", ft_atoi("+--42"));

	printf("--- TESTE 5: APENAS TEXTO ---\n");
	// Não tem nenhum número no começo. Deve retornar 0.
	printf("Sua funcao: %d\n", ft_atoi("porto42"));

	return (0);
}*/