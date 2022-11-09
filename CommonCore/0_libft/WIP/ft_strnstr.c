/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:27:55 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/08 21:27:55 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (!little_len)
		return (big);
	while (i <= len - little_len)
	{
		j = 0;
		while (j < little_len)
		{
			if (big[j] != little[j])
				break;
			j++;
			if (j == little_len)
				return (big);
		}
		i++;
		big++;
	}
	return (NULL);
}

int main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	
	
	printf("%s\n", ft_strnstr(largestring, smallstring, 2));
}//NOT WORKING