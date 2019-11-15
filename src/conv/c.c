/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:41:03 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:41:05 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

char	*conv_c(va_list *ap, t_flags flags)
{
	char	*s;

	if (flags.len == FLAG_L)
		return (conv_upper_c(ap, flags));
	if ((s = ft_strnew(1)) == 0)
		return (0);
	s[0] = (char)va_arg(*ap, int);
	if (s[0] == 0)
		s[0] = -1;
	if (flags.width > 1 && flags.neg_field)
		padding_right(&s, flags.width - 1, ' ');
	else if (flags.width > 1 && flags.zero_pad)
		padding_left(&s, flags.width - 1, '0');
	else if (flags.width > 1)
		padding_left(&s, flags.width - 1, ' ');
	return (s);
}
