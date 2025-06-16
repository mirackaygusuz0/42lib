/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:28:34 by mukaygus          #+#    #+#             */
/*   Updated: 2025/05/31 16:30:14 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = (const unsigned char *)s;
    size_t i;
    i = 0;

    while (i < n)
    {
        if(ptr[i] == (unsigned char)c) 
        {
            return (void *)&ptr[i];
        }
        i++;
    }
    return 0;
}