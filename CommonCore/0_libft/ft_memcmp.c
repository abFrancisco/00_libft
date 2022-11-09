/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:51:46 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/09 18:09:31 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	i = 0;
	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (*tmp_s1 == *tmp_s2 && *tmp_s1 != '\0' && *tmp_s2 != '\0' && i < n++)
	{
		tmp_s1++;
		tmp_s2++;
	}
	return (*tmp_s1 - *tmp_s2);
}

int main()
{
	printf("%i\n", memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%i\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%i\n", memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	printf("%i\n", ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
}