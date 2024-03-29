/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:33:06 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:33:16 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void		delete_buf(t_buf **buf)
{
	if (buf == 0)
		return ;
	free((*buf)->data);
	free(*buf);
	*buf = 0;
}
