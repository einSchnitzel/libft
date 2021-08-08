/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:15:22 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/29 23:00:10 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char*	contentsrc;
	unsigned char*	contentdst;

	contentsrc = (unsigned char*) src;
	contentdst = (unsigned char*) dst;
	i = 0;
	while(len > 0 && &src[i] > &dst[0])
	{
		contentdst[i] = contentsrc[i];
		i++;
		len--;
	}
	return (dst);
}