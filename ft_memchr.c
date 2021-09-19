/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:15:48 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/19 14:36:44 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** searches string s for first location of c
** returns pointer to the byte located or NULL if none exists within n bytes
*/
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
