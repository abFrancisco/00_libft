/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:49:37 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/02 18:54:18 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*tmp = s;
	while (n--)
	{
		if ((unsigned char)c == *tmp)
			return (tmp);
		tmp++;
	}
	return ((void *)0);
}