/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:34:12 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/20 11:30:57 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    size_t  length;
    
    length = 0;
    while(s[length] != '\0')
    {
        length++;
    }
    return(length);
}
