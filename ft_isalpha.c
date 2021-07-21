/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:15:53 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/21 13:51:31 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isupper(int n)
{
	if ((n < 'A' || n > 'Z'))
		return (0);
	return (1);
}

int	ft_islower(int n)
{
	if ((n < 'a' || n > 'z'))
		return (0);
	return (1);
}

int	ft_isalpha(int n)
{
	if (ft_isupper(n) || ft_islower(n))
		return (1);
	return (0);
}
