/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:46:40 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/02 18:46:42 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char *tmp_src = src;
	unsigned char *tmp_dest = dest;
	while (n--)
		*tmp_dest++ = *tmp_src++;
	return (dest);
}