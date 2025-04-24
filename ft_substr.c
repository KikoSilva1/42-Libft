/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:00:11 by framiran          #+#    #+#             */
/*   Updated: 2025/04/21 13:35:33 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr_ptr;
	int i;

	if (!s)
		return (NULL);

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start)) //tamanho da string apartir do indice start
		len = ft_strlen(s + start);
	substr_ptr = malloc((len + 1) *sizeof(char));
	if(!substr_ptr)
		return (NULL);
	i = ft_strlcpy(substr_ptr, &s[start], len + 1);
	return (substr_ptr);
}


