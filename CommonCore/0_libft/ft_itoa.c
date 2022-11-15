/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:03:16 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/14 15:37:13 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)//brain fart
{
	char	*str;
	char	*str_start;
	long	l;

	str = malloc(12);
	str_start = str;
	l = (long)n;
	if (l < 0)
	{
		l = -l;
		*str++ = '-';
	}
	while (l)
	{
		*str++ = (l % 10) + '0';
		l = l / 10;
	}
	*str = '\0';
	return (invert(str_start));
}
