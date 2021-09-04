/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 22:57:04 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/04 16:28:37 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void static	ft_copys1(char const *s1, char *snew, int i, int n1)
{
	while (s1[i] != '\0' && i <= n1)
	{	
		snew[i] = s1[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*snew;
	size_t		n1;
	size_t		n2;
	size_t		i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	n1 = ft_strlen(s1);
	n2 = ft_strlen(s2);
	snew = (char *) malloc(n1 + n2 + 1);
	if (snew == NULL || !s1 || !s2)
		return (NULL);
	ft_copys1(s1, snew, i, n1);
	i = 0;
	while (s2[i] != '\0')
	{
		snew[n1 + i] = s2[i];
		i++;
	}
	snew[n1 + n2] = '\0';
	return (snew);
}
