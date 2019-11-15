/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:48:39 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:48:40 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	*ft_realloc(void *ptr, size_t prev_size, size_t new_size)
{
	void	*dst;

	if (prev_size >= new_size)
		return (ptr);
	if ((dst = malloc(new_size)) == 0)
	{
		free(ptr);
		return (0);
	}
	ft_memcpy(dst, ptr, prev_size);
	free(ptr);
	return (dst);
}
