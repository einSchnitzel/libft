/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 15:15:48 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/21 13:51:26 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	letter;

	letter = (unsigned char) c;
	i = 0;
	while(i < n)
	{
		if (letter == &s[i])
			return (&s[i]);
			i++;
	}
	return(NULL);
}
