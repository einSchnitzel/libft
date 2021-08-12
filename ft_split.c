/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:49:20 by smetzler          #+#    #+#             */
/*   Updated: 2021/08/11 16:11:26 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	size_t	size;
	char	**array;

	i = 0;
	size = ft_strlen(s);
	array = malloc(size + 1);
	if (!array)
		return (NULL);
	while (s[i] != '\0')
	{
		j = 0;
		if (s[i] == c)
		{
			j++;
			i = 0;
		}
		array[j][i] = s[size];
		i++;
		size++;
	}
	array[size] = NULL;
	return (array);
}
