/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 14:22:16 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/12 11:38:25 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//procura a ultima ocorrencia de um caractere
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[0] == (char)c)
		return ((char *)&s[0]);
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	char	frase[] = "hello";
	char	*resultado;

	resultado = ft_strrchr(frase, 'l');
	printf("%s \n", resultado);
	return (0);
}*/