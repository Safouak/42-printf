/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:39:22 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:39:24 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

static size_t	ft_lltoa_len_base(unsigned long long val, int base)
{
	size_t				len;

	if (val == 0)
		return (1);
	len = 0;
	while (val != 0)
	{
		val /= base;
		len += 1;
	}
	return (len);
}

static void		ft_lltoa_rec_base(char *buf, unsigned long long val,
		size_t *idx, t_base base)
{
	if (val >= base.len)
		ft_lltoa_rec_base(buf, val / base.len, idx, base);
	buf[*idx] = base.base[val % base.len];
	(*idx)++;
}

char			*ft_lltoa_base(unsigned long long val, char *base)
{
	size_t	idx;
	char	*buf;
	size_t	base_len;

	idx = 0;
	base_len = ft_strlen(base);
	if ((buf = ft_strnew(ft_lltoa_len_base(val, base_len))) == 0)
		return (0);
	ft_lltoa_rec_base(buf, val, &idx, (t_base){base, base_len});
	return (buf);
}
