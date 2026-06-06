/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 15:46:39 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/06 17:00:28 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//compara duas strings até n caracteres
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int	resultado;

	resultado = ft_strncmp("Porto", "Porco", 6);
	printf("%d \n", resultado);
	return (0);
}*/