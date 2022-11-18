/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:09:40 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/18 16:16:53 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
char	**ft_split(char const *s, char c)
{
	char	**result;
	char	**result_start;
	char	*ptr;

	result = malloc(ft_strlen(s) + 1);
	result_start = result;
	while (*s)
	{
		ptr = NULL;
		if (*s != c)
		{
			ptr = ft_strchr(s, c);
			if (!ptr)
				ptr = ft_strchr(s, '\0');
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

/* int main()
{
	char *str = "     split       this for   me  !";
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