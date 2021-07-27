/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:14:32 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/27 23:21:17 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	unsigned char* contentsrc;
	unsigned char* contentdst;

	i = 0;
	contentsrc = (unsigned char*) src;
	contentdst = (unsigned char*) dst;
	while(n > 0)
	{
		contentdst[i] = contentsrc[i];
		i++;
		n--;
	}
	return (dst);
}