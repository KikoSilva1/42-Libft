/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:54:48 by framiran          #+#    #+#             */
/*   Updated: 2025/04/18 18:32:41 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	unsigned char*	loc;

	loc = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		*(loc++) = '\0';
		i++;
	}
}
