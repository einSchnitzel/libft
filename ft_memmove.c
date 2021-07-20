/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:15:22 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/20 11:31:00 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void * ft_memmove(void *dst, const void *src, size_t len)
{
    void *dstcpy;
    size_t  i;

    i = 0;
    dstcpy = ft_cpy(dst);
    while(len > 0)
    {
        dst[i] = src[i];
        if(dst == src)
            return(dstcpy);    
        len--;
    }
    return(dstcpy);
}