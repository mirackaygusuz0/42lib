/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:09:17 by mukaygus          #+#    #+#             */
/*   Updated: 2025/07/08 17:01:25 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dstcpy;
	const unsigned char	*srcpy;

	if (!dest && !src)
		return (NULL);
	dstcpy = (unsigned char *)dest;
	srcpy = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstcpy[i] = srcpy[i];
		i++;
	}
	return (dest);
}
