/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:33:29 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:33:34 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

t_buf		*create_buf(size_t to_allocate)
{
	t_buf	*res;

	if ((res = ft_memalloc(sizeof(t_buf))) == 0)
		return (0);
	if ((res->data = ft_memalloc(sizeof(char *) * to_allocate)) == 0)
	{
		free(res);
		return (0);
	}
	res->allocated = to_allocate;
	res->len = 0;
	return (res);
}
