/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:55:29 by framiran          #+#    #+#             */
/*   Updated: 2025/04/18 18:29:21 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*	ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return (char *)s;
	return (NULL);
}
