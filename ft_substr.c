/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 23:32:59 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/04 16:03:12 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	substring = malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	if ((size_t)ft_strlen(s) < start)
	{
		substring[0] = '\0';
		return (substring);
	}
	i = 0;
	while (i < len && len != 0)
	{
		substring[i] = s[(size_t)start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
