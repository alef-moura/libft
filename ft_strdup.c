/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:08:09 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/08 15:27:12 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//duplica uma string na memoria
char	*ft_strdup(const char *s1)
{
	char	*clone;
	size_t	len;

	len = ft_strlen(s1);
	clone = malloc((len + 1) * sizeof(char));
	if (clone == NULL)
		return (NULL);
	ft_strlcpy(clone, s1, len + 1);
	return (clone);
}

/*int	main(void)
{
	char	or[] = "42Porto";
	char	*clon;
	
	printf("Original antes: %s (Endereço: %p)\n", or, (void *)or);
	clon = ft_strdup(or);
	printf("Clone criado: %s, (Endereço: %p)\n", clon, (void *)clon);
}*/