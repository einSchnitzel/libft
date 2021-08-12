/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 22:57:04 by smetzler          #+#    #+#             */
/*   Updated: 2021/08/11 16:14:42 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*snew;
	size_t		n1;
	size_t		n2;
	size_t		i;

	i = 0;
	n1 = ft_strlen(s1);
	n2 = ft_strlen(s2);
	snew = (char *) malloc(n1 + n2 + 1);
	if (snew == NULL || !s1 || !s2)
		return (NULL);
	while (s1[i] != '\0' && i <= n1)
	{
		snew[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		snew[n1 + i] = s2[i];
		i++;
	}
	snew[n1 + n2] = '\0';
	return (snew);
}
