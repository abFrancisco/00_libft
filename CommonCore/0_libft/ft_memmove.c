/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:47:03 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/09 17:26:39 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned char	*tmp_src;
	unsigned char	*tmp_dest;
	unsigned char	*copy;
	unsigned char	*tmp_copy;
	unsigned int	i;

	tmp_src = (unsigned char *)src;
	tmp_dest = (unsigned char *)dest;
	copy = malloc(n);
	tmp_copy = copy;
	i = 0;
	while (i++ < n)
		*tmp_copy++ = *tmp_src++;
	i = 0;
	while (i++ < n)
		*tmp_dest++ = *copy++;
	return (dest);
}
