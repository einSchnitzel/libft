/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:16:55 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/05 14:15:41 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

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
