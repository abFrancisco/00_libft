/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:47:03 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/16 18:33:23 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	copy[n];

	if (!dest && !src)
		return (NULL);
	ft_memcpy(copy, src, n);
	ft_memcpy(dest, copy, n);
	return (dest);
}