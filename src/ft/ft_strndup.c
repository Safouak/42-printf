/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:45:34 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:45:42 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

char	*ft_strndup(const char *s, size_t size)
{
	char	*res;
	size_t	idx;

	if ((res = ft_strnew(size)) == 0)
		return (0);
	idx = 0;
	while (idx < size)
	{
		res[idx] = s[idx];
		idx++;
	}
	return (res);
}
