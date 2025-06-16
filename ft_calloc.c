/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 17:07:42 by mukaygus          #+#    #+#             */
/*   Updated: 2025/06/01 17:15:51 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t n, size_t size)
{
    size_t total;
    total = n * size;

    if (size != 0 && total / size != n)
        return (NULL);
    
    void* ptr;
    ptr = malloc(total);
    if (ptr == NULL)
        return (NULL);

    memset(ptr, 0, total);

    return ptr;
}