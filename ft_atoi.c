/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 13:39:36 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/15 13:43:11 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sl;
	int	rt;

	i = 0;
	sl = 1;
	rt = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sl = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rt = (rt * 10) + (str[i] - '0');
		i++;
	}
	return (rt * sl);
}
