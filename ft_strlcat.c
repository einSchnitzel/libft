/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:16:55 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/29 23:56:31 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	i;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = lendst;
	if (dstsize < lendst)
	{
		return(lendst + lensrc);
	}
	while (i <= dstsize - lendst -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(lensrc + lendst);
}