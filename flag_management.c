/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_management.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 19:58:21 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:14:47 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			flag_management_d(void)
{
	if (g_current_data.flags[SPACE] && g_current_data.sign == '+')
		g_current_data.str = ft_concat(repeat_char(' ', 1), \
		g_current_data.str);
	if (g_current_data.flags[PLUS] || g_current_data.sign == '-')
	{
		if (g_current_data.str.str[0] == '0' \
		&& g_current_data.str.len != g_current_data.precision)
		{
			if (g_current_data.flags[PLUS] && \
			g_current_data.flags[NULL_FLAG] != NULL_FLAG)
				g_current_data.str = ft_concat(repeat_char(\
				g_current_data.sign, 1), g_current_data.str);
			else
				g_current_data.str.str[0] = g_current_data.sign;
		}
		else
			g_current_data.str = ft_concat(\
			repeat_char(g_current_data.sign, 1), g_current_data.str);
	}
}

void			flag_management_i(void)
{
	flag_management_d();
}

void			flag_management_o(void)
{
	if (g_current_data.flags[OCTOTORP] && g_current_data.str.len \
	&& g_current_data.str.str[0] != '0')
		g_current_data.str = ft_concat(repeat_char('0', 1), \
		g_current_data.str);
	else if (g_current_data.flags[OCTOTORP] && g_current_data.str.len == 0)
		g_current_data.str = ft_concat(repeat_char('0', 1), \
		g_current_data.str);
}

void			flag_management_x(void)
{
	if (g_current_data.flags[PLUS])
		g_current_data.str = ft_concat(repeat_char(g_current_data.sign, 1), \
		g_current_data.str);
	if (g_current_data.flags[OCTOTORP] && ft_strcmp(\
	g_current_data.str.str, "0") != 0)
	{
		g_current_data.str.str = ft_strjoindel(ft_strdup(\
		g_current_data.upper == 0 ? "0x" : "0X"), g_current_data.str.str);
		g_current_data.str.len += 2;
	}
	if (g_current_data.upper == 0)
		ft_striter(g_current_data.str.str, ft_tolowercase);
}

void			flag_management_f(void)
{
	if (g_current_data.flags[SPACE] && g_current_data.sign == '+')
		g_current_data.str = ft_concat(repeat_char(' ', 1), \
		g_current_data.str);
}
