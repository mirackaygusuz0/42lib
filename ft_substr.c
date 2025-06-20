/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-19 14:12:42 by mukaygus          #+#    #+#             */
/*   Updated: 2025-06-19 14:12:42 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t s_len;
    size_t sub_len;
    char *sub;
    size_t  i;

    if (!s)
        return (NULL);

    s_len = ft_strlen(s);

    if (start >= s_len)
        return (malloc(1));
    
    sub_len = s_len - start;
    if (sub_len > len)
        sub_len = len;
    
    sub = (char *)malloc(sub_len + 1);
    if (!sub)  
        return (NULL);

    i = 0;
    while (i < sub_len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';

    return (sub);
}