/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:45:20 by framiran          #+#    #+#             */
/*   Updated: 2025/04/18 18:41:00 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	h_i;
	int	n_i;

	if (!*needle)
		return ((char *)haystack);
	if (!*haystack || len == 0)
		return (NULL);
	h_i = 0;
	n_i = 0;
	while ((size_t) h_i <= len -1)
	{
		while (needle[n_i] == haystack[h_i + n_i] && (size_t)(h_i + n_i) <= len - 1)
		{
			n_i++;
			if (needle[n_i] == '\0')
				return ((char *) &haystack[h_i]);
		}
		n_i=0;
		h_i++;
	}
	return (NULL);
}
