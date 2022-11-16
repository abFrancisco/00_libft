/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:03:16 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/16 18:19:34 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*invert(char *str)
{
	char	*inv;
	char	*inv_ptr;
	int		len;
	int		i;

	inv = malloc(16);
	inv_ptr = inv;
	len = 0;
	if (*str == '-')
	{
		str++;
		*inv++ = '-';
	}
	i = 0;
	while (str[i++])
		len++;
	i = 0;
	while (len > 0)
		inv[i++] = str[(len--) - 1];
	inv[i] = '\0';
	return (inv_ptr);
}

char	*ft_itoa(int n)//this wrong
{
	char	*str;
	char	*str_ptr;
	long	l;

	str = malloc(16);
	if (!str)
		return (NULL);
	str_ptr = str;
	l = n;
	if (n < 0)
	{
		l = -l;
		*str++ = '-';
	}
	while (l)
	{
		*str++ = (l % 10) + '0';
		l = l / 10;
	}
	if (n == 0)
		*str++ = '0';
	*str = '\0';
	return (invert(str_ptr));
}