/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 12:38:37 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/29 23:00:31 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		sum;

	sum = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' )
			sign = -sign;
		i++;
	}	
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		sum = sum * 10;
		sum = sum + (str[i] - '0');
		i++;
	}
	return (sum * sign);
}