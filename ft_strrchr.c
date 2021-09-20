/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:59:36 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/20 16:03:46 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** last location of c in s
** returns address or NULL
*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*helper;

	helper = (char *)s;
	i = (int)ft_strlen(helper) - 1;
	if (c == '\0')
		return (&helper[i + 1]);
	while (i >= 0)
	{
		if (helper[i] == (char)c)
		{
			return (&helper[i]);
		}
		i--;
	}
	return (NULL);
}
