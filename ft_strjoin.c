/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 15:12:44 by mukaygus          #+#    #+#             */
/*   Updated: 2025/07/05 15:43:39 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	str_copy(char *dest, const char *src, size_t start)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[start + i] = src[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	tmp = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!tmp)
		return (NULL);
	str_copy(tmp, s1, 0);
	str_copy(tmp, s2, s1_len);
	tmp[s1_len + s2_len] = '\0';
	return (tmp);
}
