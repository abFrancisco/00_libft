/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:27:55 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/09 17:32:03 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*NOT WORKING*/

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen((char *)little);
	if (!little_len)
		return ((char *)big);
	while (i <= len - little_len)
	{
		j = 0;
		while (j < little_len)
		{
			if (big[j] != little[j])
				break ;
			j++;
			if (j == little_len)
				return ((char *)big);
		}
		i++;
		big++;
	}
	return (NULL);
}
