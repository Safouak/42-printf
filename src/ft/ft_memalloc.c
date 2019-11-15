/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:43:49 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:43:51 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	*ft_memalloc(size_t size)
{
	void	*dst;

	if ((dst = malloc(size)) == 0)
		return (0);
	ft_memset(dst, 0, size);
	return (dst);
}
