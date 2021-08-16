/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:49:20 by smetzler          #+#    #+#             */
/*   Updated: 2021/08/16 17:40:41 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_allocatearray(char **array, char const *s, char c)
{
	int		i;
	int		n;

	i = 0;
	n = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			n++;
			while (s[i] == c)
				i++;
			i--;
		}
		i++;
	}
	printf("%d", i);
	array = (char **)malloc(sizeof(char *) * (n + 1));
	if (!array)
		return (1);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		pos;

	pos = 0;
	array = NULL;
	i = ft_allocatearray(array, s, c);
	if (i == 1)
		return (NULL);
	while (s[pos] != '\0')
	{
		j = 0;
		while (s[pos] != c) // iteration or skipping through c s is missing
		{
			j++;
			pos++;
		}
		array[i] = (char *)malloc(sizeof(char) * (j + 1));
		if (array[i] == NULL)
			return (NULL);
		array[i] = ft_substr(s, pos - j, j + 1);
		i++;
		pos++;
	}
	return (array);
}

/*static int	ft_arraysize(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			n++;
		i++;
	}
	return (n);
}

static char	*ft_makestr(char const *s, char c, int n)
{
	int		size;
	char	*array;

	size = 0;
	while (s[size] != '\0' && n >= 0)
	{
		if (s[size] == c)
			n--;
		size++;
	}
	array = malloc(sizeof(char) * (size + 1));
	if (!array)
		return (NULL);
	array[size + 1] = '\0';
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		size;
	char	**array;

	i = 0;
	j = 0;
	size = ft_arraysize(s, c);
	array = malloc(sizeof(char) * (size));
	if (!array)
		return (NULL);
	while (s[i] != '\0' && j < size)
	{
		array[j] = ft_makestr(s, c, j);
		if (array[j] == NULL)
			return (NULL);
		while (s[i + j] != c)
		{
			array[j][i] = s[i + j];
			i++;
		}
		j++;
		i = 0;
	}
	return (array);
}
*/