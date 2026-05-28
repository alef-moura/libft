/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 10:00:06 by alesferr          #+#    #+#             */
/*   Updated: 2026/05/28 15:09:20 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//verifica se é numero(0-9)
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*#include <stdio.h>

int main(void)
{
    printf("%d", ft_isdigit('3'));
    return (0);
}*/