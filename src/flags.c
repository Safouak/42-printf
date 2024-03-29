/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:50:19 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:50:21 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

int		is_flag(char c)
{
	return (c == '-' || c == '+' || c == ' ' || c == '0' || c == '#');
}

void	set_flag(t_flags *flags, char c)
{
	if (c == '-')
		flags->neg_field = 1;
	else if (c == '+')
		flags->sign = 1;
	else if (c == ' ')
		flags->blank_pos = 1;
	else if (c == '0')
		flags->zero_pad = 1;
	else if (c == '#')
		flags->alter_form = 1;
}

int		is_flag_len(char c)
{
	return (c == 'h' || c == 'l' || c == 'j' || c == 'z');
}

int		set_flag_len(t_flags *flags, const char *s)
{
	if (s[0] == 'l' && s[1] == 'l')
	{
		flags->len = FLAG_LL;
		return (2);
	}
	else if (s[0] == 'l')
		flags->len = FLAG_L;
	else if (s[0] == 'h' && s[1] == 'h')
	{
		flags->len = FLAG_HH;
		return (2);
	}
	else if (s[0] == 'h')
		flags->len = FLAG_H;
	else if (s[0] == 'j')
		flags->len = FLAG_J;
	else if (s[0] == 'z')
		flags->len = FLAG_Z;
	else
		return (0);
	return (1);
}
