/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukaygus <mukaygus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 21:10:00 by mukaygus          #+#    #+#             */
/*   Updated: 2025/07/05 16:26:03 by mukaygus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int n)
{
	if (n >= 'a' && n <= 'z')
		return (n - 32);
	return (n);
}
