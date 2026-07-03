/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 11:57:18 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/14 14:15:16 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Converte int (40) em string ("40") [+0]
static int	ft_get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	nbr;

	nbr = n;
	len = ft_get_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[len - 1] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (str);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	// 1. Chamamos a função e guardamos as strings retornadas
	char *teste1 = ft_itoa(42);
	char *teste2 = ft_itoa(-105);
	char *teste3 = ft_itoa(0);
	char *teste4 = ft_itoa(-2147483648);

	// 2. Imprimimos os resultados para verificar visualmente
	printf("Teste 1 (Positivo) : %s\n", teste1);
	printf("Teste 2 (Negativo) : %s\n", teste2);
	printf("Teste 3 (Zero)     : %s\n", teste3);
	printf("Teste 4 (INT_MIN)  : %s\n", teste4);

	// 3. SEMPRE libere a memória que foi alocada pelo malloc!
	free(teste1);
	free(teste2);
	free(teste3);
	free(teste4);

	return (0);
}*/