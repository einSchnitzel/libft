/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:19:01 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/21 13:19:43 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int n)
{
	if (ft_isalpha(n) || ft_isdigit(n))
		return (1);
	return (0);
}
