/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:39:57 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/18 17:54:28 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*prev_node;
	t_list	**lst_ptr;

	lst_ptr = lst;
	if (del && lst)
	{
		while (*lst)
		{
			prev_node = *lst;
			*lst = (*lst)->next;
			ft_lstdelone(prev_node, del);
		}
	}
	lst_ptr = NULL;
	if (!lst_ptr)
		return ;
}
