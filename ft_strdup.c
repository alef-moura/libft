/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:08:09 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/15 23:31:30 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
