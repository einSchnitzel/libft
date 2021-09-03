/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:49:20 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/04 00:27:33 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cleararr(char **arr, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(arr[i]);
		i++;
	}
}

int	ft_count(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

static void	ft_divstr(char **arr, char *s, char c, unsigned int count)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	start;

	i = 0;
	j = 0;
	while (j < count)
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			arr[j] = ft_substr(s, start, (i - start));
			if (arr[j] == NULL)
				ft_cleararr(arr, j);
		}
		j++;
	}
	arr[count] = NULL;
}

char	**ft_split(char const *s, char c)
{
	unsigned int	count;
	char			**arr;
	
	if (!s)
		return (NULL);
	count = ft_count((char *)s, c);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	if (!arr)
		return (NULL);
	ft_divstr(arr, (char *)s, c, count);
	if (arr == NULL)
	{
		free(arr);
		arr = NULL;
	}
	return (arr);
}
