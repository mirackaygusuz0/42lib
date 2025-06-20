/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-06-20 15:32:10 by mukaygus          #+#    #+#             */
/*   Updated: 2025-06-20 15:32:10 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	long	num = n;
	int		len = (n <= 0) ? 1 : 0;
	long	tmp = num;

	if (num < 0)
		num = -num;

	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	if (n == 0)
		len = 1;

	str = malloc(len + 1);
	if (!str)
		return (NULL);

	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';

	while (num)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
