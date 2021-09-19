/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:10:09 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/19 16:05:16 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copies src to dst up to dstsize -1 characters from str to dst, guarantees \0
** if dstsize is allocated correctly
** length of srcis returned, to see if dstsize was chosen correctly
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	lensrc = ft_strlen(src);
	if (dstsize == 0)
		return (lensrc);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lensrc);
}
