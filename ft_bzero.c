/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 00:21:27 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/17 01:53:37 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char   *location;
    int i =1;
    location = s;
    while(n > 0)
    {
        *location = 0;
        location++;
    }

}