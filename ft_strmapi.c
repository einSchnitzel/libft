/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:37:32 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/04 16:33:48 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		size;
	char	*snew;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	size = ft_strlen(s) + 1;
	snew = (char *) malloc(sizeof(char) * size);
	if (!snew)
		return (NULL);
	while (s[i] != '\0')
	{
		snew[i] = f(i, s[i]);
		i++;
	}
	snew[i] = '\0';
	return (snew);
}
