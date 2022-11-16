/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falves-b <falves-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:04:28 by falves-b          #+#    #+#             */
/*   Updated: 2022/11/09 17:31:34 by falves-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	i = 0;
	while (dst[i] && i < size)
		i++;
	while (src[i - dst_len] && i < size - 1)
	{
		dst[i] = src[i - dst_len];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

/* size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	offset;
	int		d_len;
	int		s_len;
	int		src_index;

    d_len = ft_strlen(dst);
    s_len = ft_strlen(src);

    offset = d_len;

    src_index = 0;
    while( *(src+src_index) != '\0' )
    {
        *(dst+offset) = *(src+src_index);
        offset++;
        src_index++;
        if( offset==size-1)
            break;
    }
    *(dst+offset) = '\0';

    return( d_len+s_len );
} */