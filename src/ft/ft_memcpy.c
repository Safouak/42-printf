/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:47:55 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:47:57 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		idx;
	char		*dst_ptr;
	const char	*src_ptr;

	idx = 0;
	dst_ptr = dst;
	src_ptr = src;
	while (idx < n)
	{
		dst_ptr[idx] = src_ptr[idx];
		idx++;
	}
	return (dst);
}
