/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 11:49:20 by smetzler          #+#    #+#             */
/*   Updated: 2021/09/19 14:43:50 by smetzler         ###   ########.fr       */
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

static int	ft_countwords(char const *s, char c)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			n++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (n);
}

static void	ft_divwrite(char **arr, char *s, char c, unsigned int words)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	start;

	i = 0;
	j = 0;
	while (j < words)
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
	arr[words] = NULL;
}

/*
** len bytes of c (unsigned char) to b
*/
char	**ft_split(char const *s, char c)
{
	unsigned int	words;
	char			**array;

	if (!s)
		return (NULL);
	words = ft_countwords((char *)s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	ft_divwrite(array, (char *)s, c, words);
	if (array == NULL)
	{
		free(array);
		array = NULL;
	}
	return (array);
}
