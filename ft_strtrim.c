/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 10:52:10 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/09 11:54:01 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*n;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	n = ft_substr(s1, start, end - start);
	return (n);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str1 = "xx42xx";
	char	*list = "x";
	char	*str2;

	printf("original: %s \n", str1);
	printf("Lista de limpeza: %s \n", list);
	str2 = ft_strtrim(str1, list);
	printf("Resultado limpo: %s \n", str2);
	return (0);
}*/