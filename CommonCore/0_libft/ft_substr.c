/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:28:12 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/09 17:27:48 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	while (s[i] && i < len)
	{
		if (i >= start)
			sub[i - start] = s[i];
		i++;
	}
	sub[i - start] = '\0';
	return (sub);
}
