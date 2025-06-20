/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:39:20 by mukaygus          #+#    #+#             */
/*   Updated: 2025/06/21 17:43:37 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *dest, const char *src, size_t len)
{
    size_t i;
    size_t j;

    if (*src == '\0')
    {
        return (char *)dest;
    }
    while (dest[i] != '\0' && i < len)
    {
        j = 0;

        while (src[j] != '\0' && (i + j) < len && dest[i + j] == src[j])
        {
            j++;
        }
        
        if (src[j] == '\0')
        {
            return (char *)&dest[i];
            
        }
        i++;
    }
    return 0;
}