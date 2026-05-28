/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:13:10 by alesferr          #+#    #+#             */
/*   Updated: 2026/05/28 17:52:04 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdio.h>
//funções de verificação de caracteres
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

//funções de conversão de caracteres
int		ft_toupper(int c);
int		ft_tolower(int c);

//funções de strings
//MEDIR TAMANHO:
size_t	ft_strlen(const char *s);

//

#endif /*para finalizar a biblioteca*/