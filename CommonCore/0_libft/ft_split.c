/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:09:40 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/10 16:26:50 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	**result_start;
	char	*word;
	int		i;
	int		j;

	result = malloc(ft_strlen(ft_strdup(s)) * sizeof(char *));
	result_start = result;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c && j)
		{
			word = malloc(j + 1);
			ft_strlcpy(word, &s[i - j], j + 1);
			printf("%i ", i);
			printf("%i", j);
			*result++ = word;
			j = 0;
		}
		else
			j++;
		printf("\ni++\n");
		i++;
	}
	return (result_start);
}

int main()
{
	char *str = "1234 456 789 123 456 789";
	char **split = ft_split(str, ' ');
	while (*split)
	{
		//printf("%s\n", split);
		split++;
	}
}
