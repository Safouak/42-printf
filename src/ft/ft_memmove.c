/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:44:08 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:44:10 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_ptr;
	const char	*src_ptr;
	size_t		idx;

	dst_ptr = dst;
	src_ptr = src;
	idx = len - 1;
	if (dst_ptr > src_ptr)
	{
		while (idx < len)
		{
			dst_ptr[idx] = src_ptr[idx];
			idx--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
