/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 13:44:11 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/01 15:24:30 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//transforma em minúsculas
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

/*#include <stdio.h>

int main(void)
{
    printf("%c", ft_tolower('A'));
    return (0);
}*/