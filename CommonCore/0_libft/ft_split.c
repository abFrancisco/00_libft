/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:09:40 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/21 00:37:47 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"
 
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
	dest[i] = '\0';
	return (strlen);
}


char	**ft_split(char const *s, char c) //use memchr maybe
{
	char	**result;
	char	**result_start;
	char	*ptr;

	result = malloc(strlen(s) + 1);
	result_start = result;
	while (*s)
	{
		ptr = NULL;
		if (*s != c)
		{
			ptr = strchr(s, c);
			if (!ptr)
				ptr = strchr(s, '\0');
			*result = malloc(ptr - s + 1);
			ft_strlcpy(*result, s, ptr - s + 1);
			s = ptr + 1;
			result++;
		}
		else
			s++;
	}
	return (result_start);
}

int main()
{
	char *str = " 1 2";
	char **split = ft_split(str, ' ');	
	while (1)
	{
		if (*split == NULL)
		{
			printf("null %p\n", *split);
			break ;
		}
		printf("%s\n", *split);
		split++;
	}
} */