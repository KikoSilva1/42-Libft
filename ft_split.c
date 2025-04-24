/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:47:15 by framiran          #+#    #+#             */
/*   Updated: 2025/04/23 16:54:28 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(char const *s, char c)
{
    int i = 0;
    int count = 0;
    int in_word = 0;

    while (s[i])
    {
        if (s[i] != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (s[i] == c)
        {
            in_word = 0;
        }
        i++;
    }
    return count;
}

char **ft_split(char const *s, char c)
{
    if (!s)
        return NULL;

    int words = count_words(s, c);
    char **array = malloc((words + 1) * sizeof(char *));
    if (!array)
        return NULL;

    int i = 0;
    size_t start = 0;
	size_t j = 0;
    while (j <= ft_strlen(s))
    {
        if (s[j] == c || s[j] == '\0')
        {
            if (j > start)
            {
                array[i] = malloc(j - start + 1);
                if (!array[i])
                {
                    while (i-- > 0)
						free(array[i]);
					free(array);
					return NULL;
				}
                ft_strlcpy(array[i], &s[start], j - start + 1);
                i++;
            }
            start = j + 1;
        }
    }
    array[i] = NULL;
    return array;
}
