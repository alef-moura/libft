/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 14:41:13 by alesferr          #+#    #+#             */
/*   Updated: 2026/05/27 16:28:13 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' &&  c <= 'z') || (c >= 'A' && c <= 'Z'))
        return(1);
    return(0);
}

#include <stdio.h>

int main(void)
{
    printf("%d", ft_isalpha('@'));
    return(0);
}