/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:03:40 by mukaygus          #+#    #+#             */
/*   Updated: 2025/06/01 17:27:04 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memset(void *s, int c, size_t n)
{
    unsigned char *ptr;
    size_t i;
    ptr = (unsigned char *)s;
    i = 0;

    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return s;
}