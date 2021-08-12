/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:38:26 by smetzler          #+#    #+#             */
/*   Updated: 2021/08/11 17:38:40 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*array;
	int		len;
	int		i;

	i = 0;
	array = ft_itoa(n);
	len = ft_strlen(array);
	while (array[i] != '\0')
	{
		write (1, &array[i], fd);
		i++;
	}
}
// 	size_t	digit;

// 	if (n >= 0)
// 	{
// 		if (n == 0)
// 			write (1, "0", fd);
// 		if (n > 9)
// 		{
// 			ft_putnbr_fd(n / 10, fd);
// 		}
// 		digit = n % 10 + '0';
// 		write (1, &digit, fd);
// 	}
// 	else
// 	{
// 		digit = -n;
// 		if (n < 0)
// 		{
// 			ft_putnbr_fd(digit / 10, fd);
// 			write(1, "-", fd);
// 		}
// 		digit = -(digit % 10) + '0';
// 		write (1, &digit, fd);
// 	}
// }
