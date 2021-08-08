/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:37:32 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/30 00:50:51 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		size;
	char	*snew;

	size = ft_strlen(s);
	snew = malloc(size);
	if (snew == NULL)
		return(NULL);
	i = 0;
	while ( s[i] != '\0')
	{
		snew = f(i,s + i);
		i++;
	}
	snew[i] = '\0';
	return(snew);
}