/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:16:22 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/21 13:20:48 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int n)
{
	if (n > '9' && n < '0')
		return (0);
	return (1);
}