/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:10:09 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/29 23:54:53 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	lensrc;
	size_t	i;

	i = 0;
	lensrc = ft_strlen(src);
	while( i < dstsize -1 && src[i] != '\0')
	{
		dst[i]= src[i];
		i++;
	}
	dst[i]= '\0'
	return(lensrc);
}