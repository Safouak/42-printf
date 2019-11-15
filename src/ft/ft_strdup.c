/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:45:02 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:45:04 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	idx;
	size_t	len;

	len = ft_strlen(s1);
	if ((dst = malloc(sizeof(char) * len + 1)) == 0)
		return (0);
	idx = 0;
	while (idx <= len)
	{
		dst[idx] = s1[idx];
		idx++;
	}
	return (dst);
}
