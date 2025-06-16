/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:30:29 by mukaygus          #+#    #+#             */
/*   Updated: 2025/05/31 16:33:32 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d == s || n == 0)
    {
        return dest;
    }
    
    if (d > s && d < s + n)
    {
        size_t i;
        i = n;
        while (i>0)
        {
            i--;
            d[i] = s[i];
            
        }
    }
    else 
    {
        size_t i;
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return dest;
}