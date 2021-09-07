/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:59:36 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/07 14:26:35 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*helper;
	char	letter;
	
	i = ft_strlen(s);
	helper = (char *)s;
	letter = (char)c;
	while (helper[i] != s[0])
	{
		if (helper[i] == letter)
		{
			return (helper + i);
		}
		i--;
	}
	if (helper[i] == letter)
		return (helper + i);
	return (NULL);
}
