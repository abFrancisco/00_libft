/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:27:55 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/23 12:26:26 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;
	int		flag;

	i = 0;
	little_len = ft_strlen(little);
	if (!little_len || !len)
		return ((char *)big);
	while (i <= len - little_len && *big)
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
}
/* int main()
{
	char *str = "lorem ipsum dolor sit amet";
	char *res;
	int	i = 4;
	
	res = ft_strnstr(str, "", 10);
	if (res)
		printf("%i - %s\n", i, res);
	else
		printf("%i - null\n", i);
	i++;
	res = ft_strnstr(str, "ipsumm", 30);
	if (res)
		printf("%i - %s\n", i, res);
	else
		printf("%i - null\n", i);
	i++;
	res = ft_strnstr(str, "dol", 30);
	if (res)
		printf("%i - %s\n", i, res);
	else
		printf("%i - null\n", i);
	i++;
	res = ft_strnstr(str, "consectetur", 30);
	if (res)
		printf("%i - %s\n", i, res);
	else
		printf("%i - null\n", i);
	i++;
	res = ft_strnstr(str, "sit", 10);
	if (res)
		printf("%i - %s\n", i, res);
	else
		printf("%i - null\n", i);
	i++;
	res = ft_strnstr(str, "dolor", 15);
	if (res)
		printf("%i - %s\n", i, res);
	else
		printf("%i - null\n", i);
	i++;
	res = ft_strnstr(str, "dolor", 0);
	if (res)
		printf("%i - %s\n", i, res);
	else
		printf("%i - null\n", i);
}*/
