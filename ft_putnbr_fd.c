/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:38:26 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/21 10:18:56 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n > -1)
	{
		while (n > 9)
		{
			ft_putnbr_fd(n / 10 , fd);
		}
		write(1 ,n % 10 + '0', fd);
	}
	else 
	{
		while (n < -9)
		{
			ft_putnbr_fd(n / -10 , fd);
			write(1, "-" , fd);
		}
		write(1 ,n % 10 + '0', fd);
	}
}

