/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 23:32:59 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/09 00:01:43 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substring;
    int i;

    i = 0;
    substring = malloc(len * sizeof(char));
    if (substring == NULL)
        return(NULL);
    while(i < len)
    {
        substring[i] = s[i];
        i++;
    }
    return(substring);
}