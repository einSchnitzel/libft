/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:15:48 by smetzler          #+#    #+#             */
/*   Updated: 2021/08/09 15:38:37 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	letter;
	unsigned char	*helper;

	helper = (unsigned char *) s;
	letter = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (letter == helper[i])
		{
			return (&helper[i]);
		}
		i++;
	}
	return (NULL);
}
