/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:35:32 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:35:35 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	buf_putc(t_buf *buf, char c)
{
	if (buf->allocated <= (buf->len + 1))
		buf_realloc(buf, buf->allocated * 2);
	buf->data[buf->len++] = c;
}
