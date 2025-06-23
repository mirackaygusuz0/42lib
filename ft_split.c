/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 19:14:40 by mukaygus          #+#    #+#             */
/*   Updated: 2025/06/23 19:58:34 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *str, char sep)
{
	int	i;
	int	flag;
	int	counter;

	if (!str)
		return (0);
	i = 0;
	counter = 0;
	flag = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		while (str[i] && str[i] != sep && ++flag)
			i++;
		if (flag > 0)
		{
			flag = 0;
			counter++;
		}
	}
	return (counter);
}

static void	ft_free_set(char **ptr, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(ptr[i]);
		i++;
	}
	free (ptr);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	start;
	char			**ptr;

	if (!s)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!ptr)
		return (NULL);
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
			ptr[j] = ft_substr(s, start, i - start);
			if (!ptr[j])
			{
				ft_free_set(ptr, j);
				return (NULL);
			}
			j++;
		}
	}
	ptr[j] = NULL;
	return (ptr);
}
