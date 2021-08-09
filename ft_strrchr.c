/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:59:36 by smetzler          #+#    #+#             */
/*   Updated: 2021/08/09 13:36:25 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*addr;
	char	*helper;
	
	addr = (char*)s;
	helper =(char*)s;
	while(*helper != '\0')
		helper++;
	helper++;
	while(addr <= helper)
	{
		if (*helper == c)
		{
			return(helper);
		}
		helper--;
	}
	return(NULL);
}
