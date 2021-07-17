/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memsomething.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 23:01:35 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/08 00:53:48 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void * ft_memset (void *b, int c, size_t len)
{

    return(b);
}



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


void * ft_memmove(void *dst, const void *src, size_t len)
{
    void *dstcpy;
    int i;

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

int ft_memcmp(const void *s1, const void *s2, size_t n)
{

}

void * memchr(const void *s, int c, size_t n)
{
    int i;

    i = 0;
    while(i < n)
    {
        if (c == s[i])
            return(location);
    }
    return(NULL);
}
