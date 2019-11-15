/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:35:56 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:35:58 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	buf_realloc(t_buf *buf, size_t new_size)
{
	void	*dst;

	if (buf->allocated >= new_size)
		return ;
	if ((dst = malloc(new_size)) == 0)
		return ;
	ft_memcpy(dst, buf->data, buf->allocated);
	free(buf->data);
	buf->data = dst;
	buf->allocated = new_size;
}
