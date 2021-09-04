/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:31:07 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/04 17:21:39 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*thecopy;
	int		length;
	int		i;

	i = 0;
	length = ft_strlen(s1);
	if (s1 == NULL)
		return (NULL);
	thecopy = malloc(sizeof(char) * (length) + 1);
	if (thecopy == NULL)
		return (NULL);
	while (i < length)
	{
		thecopy[i] = s1[i];
		i++;
	}
	thecopy[i] = '\0';
	return (thecopy);
}
