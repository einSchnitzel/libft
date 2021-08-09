/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 23:25:03 by smetzler          #+#    #+#             */
/*   Updated: 2021/08/09 11:04:35 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	char	*pointer; 
	int		n;

	n = 0;
	pointer = malloc(count * size);
	while (n < (count * size))
	{
		*pointer = 0;
		pointer++;
		n++;
	}
	return ((void*) pointer);
}