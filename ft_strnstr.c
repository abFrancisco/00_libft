/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:27:55 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/28 15:02:14 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;
	int		flag;

	i = 0;
	little_len = ft_strlen(little);
	if (!little_len || !len)
		return ((char *)big);
	while (i + little_len <= len)
	{
		j = 0;
		flag = 0;
		while (j < little_len)
		{
			if (big[j] != little[j])
				flag = 1;
			j++;
			if (j == little_len && !flag)
				return ((char *)big);
		}
		i++;
		big++;
	}
	return (NULL);
} */

char			*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (!little_len)
		return((char *)big);
	while (big[0] && len >= little_len)
	{	
		if (!ft_strncmp(big, little, little_len))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

int main()
{
	/* char *big = "abcdef";
	char *little = "abcdefghijklmnop";
	int size = ft_strlen(big); */
	char *result;

	result = ft_strnstr(((void*)0), "fake", 0);
	if (result)
		printf("%s\n", result);
}