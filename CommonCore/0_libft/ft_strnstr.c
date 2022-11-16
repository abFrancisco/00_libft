/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:27:55 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/14 16:08:19 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	
	char *str = "abc123abc";
	char *sub = "xx";
	

	char *ptr = ft_strnstr(str, sub, 20);
	if (ptr)
		printf("%s\n",ptr);
	else
		printf("its a NULL\n");
}
 */