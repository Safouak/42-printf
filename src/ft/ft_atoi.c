/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:43:35 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 20:43:37 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

int		ft_atoi(const char *str)
{
	int		result;
	int		sign;

	result = 0;
	sign = 1;
	while (ft_iswhitespace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * sign);
}
