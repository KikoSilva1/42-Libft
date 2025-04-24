/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framiran <framiran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:34:16 by framiran          #+#    #+#             */
/*   Updated: 2025/04/23 18:17:50 by framiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calculate_size(int n)
{
	int size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while(n > 0)
	{
		n = n / 10;
		size++;
	}
	return size;
}
char*	ft_itoa(int n)
{
	int	size;
	char* str;
	int	i;
	size = calculate_size(n);
	str = (char*) malloc((size + 1)* sizeof(char));
	str[size] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	i = 1;
	while (n > 0)
	{
		str[size - i] = '0' + n%10;
		i++;
		n = n / 10;
	}
	return str;
}
 /*
int main()
{
	char* str = ft_itoa(-0);
	printf("%s\n",str);
}*/
