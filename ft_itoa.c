/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:38:12 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/27 23:39:53 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		numberlen(int i)
{
	int		size;

	if (i < 0)
	{
		size++;
	}
	while(i > 9 || i < -9)
	{
		i = i / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	int		copy;
	char	*array;

	copy = n;
	size = numberlen(n);
	array = (char*) malloc(size);
	if ( n < 0 )
	{
		array[0] = '-';
		array[size - 1]= -(n % 10) + '0';
		n = -(n / 10);
		size--;
	}
	while ( n > 10 )
	{
		array[size - 1]= n % 10 + '0';
		n = n / 10;
		size--;
	}
	if (copy >= 0 || copy < -9)
		array[size - 1]= n % 10 + '0';
	return (array);
}