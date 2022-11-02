/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:51:46 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/02 18:51:46 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned char	*tmp_s1 = s1;
	unsigned char	*tmp_s2 = s2;
	while (*tmp_s1 == *tmp_s2 && *tmp_s1 != '\0' && *tmp_s2 != '\0')
	{
		tmp_s1++;
		tmp_s2++;
	}
	return (*tmp_s1 - *tmp_s2);
}