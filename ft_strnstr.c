/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 15:39:20 by mukaygus          #+#    #+#             */
/*   Updated: 2025/05/31 15:53:02 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (*needle == '\0')
    {
        return (char *)haystack;
    }
    while (haystack[i] != '\0' && i < len)
    {
        j = 0;

        while (needle[j] != '\0' && (i + j) < len && haystack[i + j] == needle[j])
        {
            j++;
        }
        
        if (needle[j] == '\0')
        {
            return (char *)&haystack[i];
            
        }
        i++;
    }
    return 0;
}