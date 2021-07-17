/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:15:48 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/17 16:12:03 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
