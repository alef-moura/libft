/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alesferr <alesferr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:54:54 by alesferr          #+#    #+#             */
/*   Updated: 2026/06/09 17:07:35 by alesferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	**ft_free_all(char **array, int i)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
	return (NULL);
}

static char	*ft_word_allocate(char const *s, int start, int finish)
{
	char	*word;
	int		i;

	word = (char *)malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < finish)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**master_array;
	int		j;
	int		len;

	if (!s)
		return (NULL);
	master_array = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!master_array)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			master_array[j] = word_allocate(s, 0, len);
			if (!master_array[j++])
				return (free_all(master_array, j - 1));
			s += len;
		}
	}
	master_array[j] = NULL;
	return (master_array);
}*/
