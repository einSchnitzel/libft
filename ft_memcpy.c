/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:14:32 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/19 14:36:50 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** n bytes from memory are src to dst undefined behavior for overlap,
** returns original value of dst.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*contentsrc;
	unsigned char	*contentdst;

	if (dst == NULL && src == NULL)
		return (dst);
	i = 0;
	contentsrc = (unsigned char *) src;
	contentdst = (unsigned char *) dst;
	while (n > 0)
	{
		contentdst[i] = contentsrc[i];
		i++;
		n--;
	}
	return (dst);
}
