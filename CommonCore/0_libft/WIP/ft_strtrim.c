/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:28:09 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/08 21:28:09 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	is_in_set(char c, char const *set)
{
	int	flag;

	flag = 0;
	while (*set)
		if (c == *set++)
			flag = 1;
	return (flag);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	char	*start;

	len = ft_strlen(s1);
	i = 0;
	start = malloc(len + 1);
	while (is_in_set(*s1, set))
		s1++;
	while (*s1)
		start[i++] = *s1++;
	i--;
	while (is_in_set(start[i], set))
		start[i--] = '\0';
	return (start);
}