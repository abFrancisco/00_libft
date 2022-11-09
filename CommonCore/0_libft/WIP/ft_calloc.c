/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:27:40 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/08 21:27:40 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	void *mem = malloc(nmemb * size);
	ft_memset(mem, 0, nmemb * size);
	return (mem);
}