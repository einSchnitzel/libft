/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:59:36 by smetzler          #+#    #+#             */
/*   Updated: 2021/08/10 16:34:37 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*helper;

	i = ft_strlen(s);
	helper = (char *)s;
	while (helper[i] != s[0])
	{
		if (helper[i] == c)
		{
			return (&helper[i]);
		}
		i--;
	}
	if (helper[i] == c)
		return (&helper[i]);
	return (NULL);
}
