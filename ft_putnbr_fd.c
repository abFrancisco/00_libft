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
	char	nbr;
	long	l;

	if (!fd)
		return ;
	l = n;
	if (l < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-l / 10, fd);
		nbr = (-l % 10) + 48;
	}
	else if (l < 10)
		nbr = l + 48;
	else
	{
		ft_putnbr_fd(l / 10, fd);
		nbr = (l % 10) + 48;
	}
	write(fd, &nbr, 1);
	return ;
}
