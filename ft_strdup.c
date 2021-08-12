/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:31:07 by smetzler          #+#    #+#             */
/*   Updated: 2021/08/10 15:24:31 by smetzler         ###   ########.fr       */
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
	thecopy = malloc(sizeof(char *) * (length + 1));
	if (thecopy == NULL)
		return (NULL);
	while (i <= length)
	{
		thecopy[i] = s1[i];
		i++;
	}
	thecopy[i] = '\0';
	return (thecopy);
}
