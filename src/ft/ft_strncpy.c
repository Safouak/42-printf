/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:49:07 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:49:09 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	idx;

	idx = 0;
	while (src[idx] && idx < len)
	{
		dst[idx] = src[idx];
		idx++;
	}
	while (idx < len)
		dst[idx++] = 0;
	return (dst);
}
