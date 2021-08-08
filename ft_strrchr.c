/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:59:36 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/30 00:50:03 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *addr;

	addr = s;
	while(*s != '\0')
		s++;
	s++;
	while(addr <= s)
	{
		if (*s == c)
		{
			return(s);
		}
		s--;
	}
	return(NULL);
}
