/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upper_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:42:44 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:42:45 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

char			*conv_upper_u(va_list *ap, t_flags flags)
{
	flags.len = FLAG_L;
	return (conv_u(ap, flags));
}