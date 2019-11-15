/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 20:33:43 by souakrim          #+#    #+#             */
/*   Updated: 2019/03/01 21:18:49 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

static void		set_options(const char *fmt, size_t *idx, char **col)
{
	if (!ft_strncmp(fmt + (*idx), "{SET:BO}", 8))
		*col = ft_strdup("\x1B[1m");
	else if (!ft_strncmp(fmt + (*idx), "{SET:FT}", 8))
		*col = ft_strdup("\x1B[2m");
	else if (!ft_strncmp(fmt + (*idx), "{SET:IT}", 8))
		*col = ft_strdup("\x1B[3m");
	else if (!ft_strncmp(fmt + (*idx), "{SET:UL}", 8))
		*col = ft_strdup("\x1B[4m");
	else if (!ft_strncmp(fmt + (*idx), "{SET:BL}", 8))
		*col = ft_strdup("\x1B[5m");
	else if (!ft_strncmp(fmt + (*idx), "{SET:RE}", 8))
		*col = ft_strdup("\x1B[7m");
	else if (!ft_strncmp(fmt + (*idx), "{SET:CC}", 8))
		*col = ft_strdup("\x1B[8m");
	else if (!ft_strncmp(fmt + (*idx), "{SET:RV}", 8))
		*col = ft_strdup("\x1B[28m");
	else
		return ;
	(*idx) += 8;
}

static void		set_bg_colo(const char *fmt, size_t *idx, char **col)
{
	if (!ft_strncmp(fmt + (*idx), "{BGC:BLK}", 9))
		*col = ft_strdup("\x1B[40m");
	else if (!ft_strncmp(fmt + (*idx), "{BGC:RED}", 9))
		*col = ft_strdup("\x1B[41m");
	else if (!ft_strncmp(fmt + (*idx), "{BGC:GRN}", 9))
		*col = ft_strdup("\x1B[42m");
	else if (!ft_strncmp(fmt + (*idx), "{BGC:YEL}", 9))
		*col = ft_strdup("\x1B[43m");
	else if (!ft_strncmp(fmt + (*idx), "{BGC:BLU}", 9))
		*col = ft_strdup("\x1B[44m");
	else if (!ft_strncmp(fmt + (*idx), "{BGC:MGT}", 9))
		*col = ft_strdup("\x1B[45m");
	else if (!ft_strncmp(fmt + (*idx), "{BGC:CYN}", 9))
		*col = ft_strdup("\x1B[46m");
	else if (!ft_strncmp(fmt + (*idx), "{BGC:WHT}", 9))
		*col = ft_strdup("\x1B[47m");
	else
		return ;
	(*idx) += 9;
}

static void		set_light_colo(const char *fmt, size_t *idx, char **col)
{
	if (!ft_strncmp(fmt + (*idx), "{LT:BLK}", 8))
		*col = ft_strdup("\x1B[90m");
	else if (!ft_strncmp(fmt + (*idx), "{LT:RED}", 8))
		*col = ft_strdup("\x1B[91m");
	else if (!ft_strncmp(fmt + (*idx), "{LT:GRN}", 8))
		*col = ft_strdup("\x1B[92m");
	else if (!ft_strncmp(fmt + (*idx), "{LT:YEL}", 8))
		*col = ft_strdup("\x1B[93m");
	else if (!ft_strncmp(fmt + (*idx), "{LT:BLU}", 8))
		*col = ft_strdup("\x1B[94m");
	else if (!ft_strncmp(fmt + (*idx), "{LT:MGT}", 8))
		*col = ft_strdup("\x1B[95m");
	else if (!ft_strncmp(fmt + (*idx), "{LT:CYN}", 8))
		*col = ft_strdup("\x1B[96m");
	else if (!ft_strncmp(fmt + (*idx), "{LT:WHT}", 8))
		*col = ft_strdup("\x1B[97m");
	else
		return ;
	(*idx) += 8;
}

static void		set_colo(const char *fmt, size_t *idx, char **col)
{
	if (!ft_strncmp(fmt + (*idx), "{BLK}", 5))
		*col = ft_strdup("\x1B[30m");
	else if (!ft_strncmp(fmt + (*idx), "{RED}", 5))
		*col = ft_strdup("\x1B[31m");
	else if (!ft_strncmp(fmt + (*idx), "{GRN}", 5))
		*col = ft_strdup("\x1B[32m");
	else if (!ft_strncmp(fmt + (*idx), "{YEL}", 5))
		*col = ft_strdup("\x1B[33m");
	else if (!ft_strncmp(fmt + (*idx), "{BLU}", 5))
		*col = ft_strdup("\x1B[34m");
	else if (!ft_strncmp(fmt + (*idx), "{MGT}", 5))
		*col = ft_strdup("\x1B[35m");
	else if (!ft_strncmp(fmt + (*idx), "{CYN}", 5))
		*col = ft_strdup("\x1B[36m");
	else if (!ft_strncmp(fmt + (*idx), "{WHT}", 5))
		*col = ft_strdup("\x1B[37m");
	else
		return ;
	(*idx) += 5;
}

void			check_settings(const char *fmt, size_t *idx, t_buf *buf)
{
	size_t		res;
	char		*col;

	while (fmt[*idx] == '{')
	{
		res = (*idx);
		if (!ft_strncmp(fmt + (*idx), "{OFF}", 5))
		{
			col = ft_strdup("\x1B[0m");
			(*idx) += 5;
		}
		else if (!ft_strncmp(fmt + (*idx), "{SET:", 5))
			set_options(fmt, idx, &col);
		else if (!ft_strncmp(fmt + (*idx), "{BGC:", 5))
			set_bg_colo(fmt, idx, &col);
		else if (!ft_strncmp(fmt + (*idx), "{LT:", 4))
			set_light_colo(fmt, idx, &col);
		else
			set_colo(fmt, idx, &col);
		if (res == (*idx))
			(*idx)++;
		buf_putstr(buf, col);
		free(col);
	}
}
