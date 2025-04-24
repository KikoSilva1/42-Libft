/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:47:15 by framiran          #+#    #+#             */
/*   Updated: 2025/04/24 14:41:20 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	**free_array(char **array, int last_index)
{
	while (last_index-- > 0)
		free(array[last_index]);
	free(array);
	return (NULL);
}

static void	create_word(char **array, int i, const char *s, int start, int j)
{
	array[i] = malloc(j - start + 1);
	if (!array[i])
	{
		free_array(array, i);
		return;
	}
	ft_strlcpy(array[i], &s[start], j - start + 1);
}

char	**ft_split(char const *s, char c)
{
	int			words;
	char		**array;
	size_t		i;
	size_t		j;
	size_t		start;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = malloc((words + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	start = 0;
	j = 0;
	while (j <= ft_strlen(s))
	{
		if (s[j] == c || s[j] == '\0')
		{
			if (j > start)
			{
				create_word(array, i, s, start, j);
				if (!array[i])
					return (NULL);
				i++;
			}
			start = j + 1;
		}
		j++;
	}
	array[i] = NULL;
	return (array);
}
