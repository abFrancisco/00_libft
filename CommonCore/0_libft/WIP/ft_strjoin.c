/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:27:47 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/08 21:27:47 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*join;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	join = malloc(len1 + len2);
	if (join == NULL)
		return (NULL);
	while (i < len1)
		join[i] = s1[i++];
	while (i <= len1 + len2)
		join[i] = s2[(i++) - len1];
	join[i] = '\0';
	return (join);
}