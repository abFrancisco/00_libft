/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:47:03 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/02 18:47:07 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned char *tmp_src = src;
	unsigned char *tmp_dest = dest;
	unsigned char *copy = malloc(n);
	unsigned char *tmp_copy = copy;
	int i = 0;
	while (i++ < n)
		*tmp_copy++ = *tmp_src++;
	i = 0;
	while (i++ < n)
		*tmp_dest++ = *copy++;
	return (dest);
}