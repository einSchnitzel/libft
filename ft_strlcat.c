/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:16:55 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/19 16:05:10 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** appends src to dst up to dstsize -1 characters from str to dst, guarantees \0
** if dstsize is allocated correctly
** length of srcis returned, to see if dstsize was chosen correctly
*/
size_t	ft_strlcat(char *d, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srci;

	i = 0;
	srci = 0;
	while (i < dstsize && d[i])
		i++;
	while (src[srci] && (i + srci + 1) < dstsize)
	{
		d[i + srci] = src[srci];
		srci++;
	}
	if (i < dstsize)
		d[i + srci] = '\0';
	return (i + ft_strlen(src));
}
