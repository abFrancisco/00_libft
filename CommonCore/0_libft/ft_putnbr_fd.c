/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:25:39 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/16 18:14:03 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;

	if (!fd)
		return ;
	nbr = ft_itoa(n);
	write(fd, nbr, ft_strlen(nbr));
	return ;
}