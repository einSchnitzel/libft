/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:31:07 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/20 16:02:41 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** allocates enough bytes of s1 to create a copy of string 1, copies it
** returns pointer to copy or NULL if insufficient memory is allocated.
*/
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
