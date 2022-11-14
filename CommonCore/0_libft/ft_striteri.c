/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:24:39 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/14 16:06:00 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	func(unsigned int n, char *cptr)
{
	*cptr = 48;
	return ;
}

int main()
{
	
	/* char	*str;

	str = "abcdef";
	printf("%s\n", str);
	ft_striteri(str, &func);
	printf("%s\n", str); */
}