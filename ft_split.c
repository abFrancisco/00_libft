/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:09:40 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/30 15:00:01 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strchrnul(const char *s, int c)
{
	char	*ptr;

	ptr = ft_strchr(s, c);
	if (!ptr)
		ptr = ft_strchr(s, '\0');
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	**result_start;
	char	*ptr;

	if (!s)
		return (NULL);
	result = ft_calloc(ft_strlen(s) / 2 + 2, sizeof(char *));
	result_start = result;
	if (!result || !ft_strlen(s))
		return (result_start);
	while (1)
	{
		if (*s != c)
		{
			if (*s == '\0')
				break ;
			ptr = ft_strchrnul(s, c);
			*result = ft_calloc(ptr - s + 1, 1);
			ft_strlcpy(*result++, s, ptr - s + 1);
			s = ptr;
		}
		else
			s++;
	}
	return (result_start);
}
