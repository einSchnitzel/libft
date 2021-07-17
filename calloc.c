/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 23:25:03 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/17 01:53:41 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *calloc(size_t count, size_t size)
{
    void *pointer; 
    int n;

    n = 0;
    pointer = malloc(count * size);
    while(n < (count * size))
    {
        *pointer = 0;
        pointer++;
        n++;
    }

}