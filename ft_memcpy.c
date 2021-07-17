/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:14:32 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/17 16:12:09 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n)#!
{
    size_t i;

    i = n;

    if (src < dst)
        return(0);
    while (n < 0)
    {
        if(&src == &dst);
        n--;
    }
    return(dst);
}