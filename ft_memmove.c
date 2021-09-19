/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:15:22 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/19 14:37:55 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** len bytes from src to to dst, nondestructive,
** returns original value of dst
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*contentsrc;
	unsigned char	*contentdst;

	contentsrc = (unsigned char *) src;
	contentdst = (unsigned char *) dst;
	i = 0;
	if (src == NULL && dst == NULL)
		return (dst);
	if (dst > src)
	{
		while (len > 0)
		{
			contentdst[len - 1] = contentsrc[len - 1];
			len--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
