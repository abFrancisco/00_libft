/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:40:30 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/17 13:48:17 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (1)
	{
		if ((*lst) == NULL)
		{
			(*lst) = new;
			new->next = NULL;
			return ;
		}
		*lst = (*lst)->next;
	}
	return ;
}
