/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:09:17 by mukaygus          #+#    #+#             */
/*   Updated: 2025/06/23 18:44:30 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char   *tmp_dst;
    unsigned char   *tmp_src;

    if (dst == (void *)0 && src == (void *)0)
        return (dst);
    tmp_dst = (unsigned char *) dst;
    tmp_src = (unsigned char *) src;

    while (n > 0)
    {
        *(tmp_dst++) = *(tmp_src++);
        n--;
    }
    return (dst);
}