/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:14:10 by alesferr          #+#    #+#             */
/*   Updated: 2026/05/28 15:41:21 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Verifica se é caracter imprimivel/visivel(incluindo espaço) [comandos]
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*#include <stdio.h>

int main(void)
{
    printf("%d", ft_isprint(3));
    return (0);
}*/