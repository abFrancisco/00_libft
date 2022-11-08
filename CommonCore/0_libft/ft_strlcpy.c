/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:47:35 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/02 18:47:48 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	int				strlen;

	strlen = 0;
	while (src[strlen] != '\0')
		strlen++;
	i = 0;
	if (size == 0)
		return (strlen);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size - 1)
	{
		dest[i++] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (strlen);
}