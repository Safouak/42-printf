/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:35:19 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:35:21 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	buf_putstr(t_buf *buf, char *s)
{
	size_t		len;

	if (s == 0)
		return ;
	len = 0;
	while (s[len])
	{
		if (s[len] == -1)
			s[len] = 0;
		len++;
	}
	while (buf->allocated <= (buf->len + len))
		buf_realloc(buf, buf->allocated * 2);
	ft_strncpy(buf->data + buf->len, s, len);
	buf->len += len;
}
