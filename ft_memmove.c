/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:30:29 by mukaygus          #+#    #+#             */
/*   Updated: 2025/07/05 15:54:40 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dstmv;
	const unsigned char	*srcmv;

	if (!dest && !src)
		return (NULL);
	dstmv = (unsigned char *)dest;
	srcmv = (const unsigned char *)src;
	i = 0;
	if (dstmv == srcmv || len == 0)
		return (dest);
	if (dstmv > srcmv && dstmv < srcmv + len)
	{
		while (len--)
			dstmv[len] = srcmv[len];
	}
	else
	{
		while (i < len)
		{
			dstmv[i] = srcmv[i];
			i++;
		}
	}
	return (dest);
}
