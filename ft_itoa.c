/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 11:38:12 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/21 13:42:32 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		numberlen(int i)
{
	int		size;

	if (i < 0)
	{
		size++;
	}
	while(i != 0)
	{
		i = i / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*array;
	
	size = numberlen(n);
	array = malloc(size);
	while()

}


