/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:38:12 by smetzler          #+#    #+#             */
/*   Updated: 2021/08/11 17:17:28 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int i)
{
	int		size;

	size = 0;
	if (i < 0)
	{
		size++;
	}
	while (i > 9 || i < -9)
	{
		i = i / 10;
		size++;
	}
	return (size + 1);
}

char	*ft_itoa(int n)
{
	int		length;
	size_t	cpy;
	char	*array;

	cpy = n;
	length = ft_numlen(n);
	array = (char *)malloc(sizeof(char *) * (length + 1));
	if (!array)
		return (0);
	array[length--] = '\0';
	if (n == 0)
		array[0] = '0';
	if (n < 0)
	{
		array[0] = '-';
		cpy *= -1;
	}
	while (cpy > 0)
	{
		array[length--] = (cpy % 10) + '0';
		cpy = cpy / 10;
	}
	return (array);
}
