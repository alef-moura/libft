/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 10:42:42 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/04 18:14:02 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Verifica se pertence a tabela ASCII
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*#include <stdio.h>

int main(void)
{
    printf("%d", ft_isascii(244));
    return (0);
}*/