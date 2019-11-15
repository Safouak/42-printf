/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:39:53 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:39:55 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

static unsigned long long	conv_u_cast(unsigned long long val, t_flag_len len)
{
	unsigned long long	casted;

	if (len == FLAG_HH)
		casted = (unsigned char)val;
	else if (len == FLAG_H)
		casted = (unsigned short)val;
	else
		casted = val;
	return (casted);
}

char						*conv_u(va_list *ap, t_flags flags)
{
	unsigned long long	val;
	size_t				len;
	char				*res;

	if (flags.len == FLAG_HH || flags.len == FLAG_H || flags.len == FLAG_NONE)
		val = va_arg(*ap, unsigned int);
	else
		val = va_arg(*ap, unsigned long long);
	res = ft_lltoa_base(conv_u_cast(val, flags.len), "0123456789");
	len = ft_strlen(res);
	if (res[0] == '0' && flags.precision == 0)
	{
		res[0] = 0;
		len = 0;
	}
	apply_flags_pad_int(&res, len, flags, 0);
	return (res);
}
