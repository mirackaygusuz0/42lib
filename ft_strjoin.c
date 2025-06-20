/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 15:12:44 by mukaygus          #+#    #+#             */
/*   Updated: 2025-06-20 15:12:44 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len;
    char *result;
    size_t i;
    size_t j;

    if (!s1 || !s2)
        return (NULL);

    len = ft_strlen(s1) + ft_strlen(s2);
    result = (char *)malloc(len + 1);

    if (!result)
        return (NULL);

    i = 0;
    while(s1[i])
    {
        result[i] = s1[i];
        i++;
    }

    j = 0;
    while (s2[j])
    {
        result[i + j] = s2[j];
        j++;
    }
    result[i + j] = '\0';
    return (result);
}