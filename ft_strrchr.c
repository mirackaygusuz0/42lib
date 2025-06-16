/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:02:45 by mukaygus          #+#    #+#             */
/*   Updated: 2025/05/31 15:43:50 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *last_occ;

    while (*s != '\0')
    {
        if (*s == (char)c)
            last_occ = s;
        s++;
    }
    
    if (c == '\0')
    {
        return (char *)s;
    }
    return (char *)last_occ;
}