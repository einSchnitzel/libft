/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:31:07 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/17 16:11:51 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *strdup(const char *s1)
{
    char            *thecopy;
    unsigned int    length;

    length = 0;
    while (s1[length] != '\0')
        length++;
    thecopy = malloc(length);
    while(length > 0)
    {
        thecopy[length]=s1[length];
        length--;
    }
    return(thecopy);
}ß