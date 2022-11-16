/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:09:40 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/14 15:41:22 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
char	**ft_split(char const *s, char c) //TOO LONG
{
	char		**result;
	char		**result_start;
	char		*word;
	char const	*e;

	result = malloc(ft_strlen(ft_strdup(s)) * sizeof(char *));
	if (!result)
		return (NULL);
	result_start = result;
	e = s;
	while (1)
	{
		if (*e == c || *e == '\0')
		{
			if (e - s)
			{
				word = malloc(e - s + 1);
				ft_strlcpy(word, s, e - s + 1);
				*result++ = word;
			}
			s = e + 1;
		}
		if (*e == '\0')
		{
			*result = NULL;
			break ;
		}
		e++;
	}
	return (result_start);
}

/* int main()
{
	char *str = "      split       this for   me  !       ";
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