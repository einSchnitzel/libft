/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:48:24 by smetzler          #+#    #+#             */
/*   Updated: 2021/08/10 16:21:32 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*helper;

	i = 0;
	helper = (char *)s;
	while (helper[i] != '\0')
	{
		if (helper[i] == c)
		{
			return (&helper[i]);
		}
		i++;
	}
	if (c == '\0')
		return (&helper[i]);
	return (NULL);
}
