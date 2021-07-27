/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 00:21:27 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/21 21:55:05 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*help;

	help = (char*) s;
	while (n > 0)
	{
		*help = 0;
		help++;
		n--;
	}
}