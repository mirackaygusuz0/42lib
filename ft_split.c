/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 19:14:40 by mukaygus          #+#    #+#             */
/*   Updated: 2025/07/05 15:40:29 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *str, char sep)
{
	int	i;
	int	in_word;
	int	count;

	i = 0;
	in_word = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != sep && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == sep)
			in_word = 0;
		i++;
	}
	return (count);
}

static void	ft_free(char **arr, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	ft_fill_split(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			arr[j] = ft_substr(s, start, i - start);
			if (!arr[j])
				return (ft_free(arr, j), -1);
			j++;
		}
	}
	arr[j] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!result)
		return (NULL);
	if (ft_fill_split(result, s, c) == -1)
		return (NULL);
	return (result);
}
