/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:16:42 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/19 14:39:06 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** len bytes of c (unsigned char) to b
*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	letter;
	unsigned char	*array;

	array = (unsigned char *)b;
	letter = (unsigned char)c;
	while (len > 0)
	{
		array[len - 1] = letter;
		len--;
	}
	return (b);
}
