/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:12:16 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/29 23:00:19 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int 			i;
	unsigned char 	*c1;
	unsigned char 	*c2;
	
	c1 = (unsigned char*) s1;
	c2 = (unsigned char*) s2;
	i = 0;
	if (n == 0)
		return(0);
	while (i < n)
	{
		if (c1[i] == c2[i])
			return(c1[i]-c2[i]);
	}
	return (0);
}