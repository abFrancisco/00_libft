/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:38:55 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/07 18:38:55 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int atoi(const char *nptr)
{
    int	sign = 1;
	int	value = 0;
    while (ft_isspace(*nptr))
		nptr++;
    if (*nptr == '-' || *nptr == '+')
		sign -= *nptr++ % '+';
	while (ft_isdigit(*nptr))
	{
		value = value * 10;
		value += *nptr++ - '0';
	}
	return (value * sign);
}