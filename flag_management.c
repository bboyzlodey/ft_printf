/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_management.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 02:49:12 by asybil            #+#    #+#             */
/*   Updated: 2020/08/16 06:00:27 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void delete_flag(enum e_flags flag)
{
	g_current_data.flags[flag] = 0;
}

void		remove_ignored_flags(void)
{
	if (g_current_data.flags[PLUS] && g_current_data.flags[SPACE])
		delete_flag(SPACE);
	if ((g_current_data.flags[MINUS] && g_current_data.flags[NULL_FLAG]) || 
	(g_current_data.precision > 0 && g_current_data.spec != F))
	{
		delete_flag(NULL_FLAG);
	}
}

void		flag_management(void)
{
	if (flags_convertions[g_current_data.spec] != NULL)
		flags_convertions[g_current_data.spec]();
}

void		flag_management_d(void)
{
	if (g_current_data.flags[SPACE] && g_current_data.sign == '+')
		g_current_data.str = ft_concat(repeat_char(' ', 1), g_current_data.str);
	if (g_current_data.flags[PLUS] || g_current_data.sign == '-')
	{
		if (g_current_data.str.str[0] == '0' && g_current_data.str.len != g_current_data.precision)
		{
			g_current_data.str.str[0] = g_current_data.sign;
		}
		else
			g_current_data.str = ft_concat(repeat_char(g_current_data.sign, 1), g_current_data.str);}
}

void		flag_management_i(void)
{
	flag_management_d();
}

void		flag_management_o(void)
{
	if (g_current_data.flags[OCTOTORP])
		g_current_data.str = ft_concat(repeat_char('0', 1), g_current_data.str);
}

void		flag_management_x(void)
{
	if (g_current_data.flags[PLUS])
		g_current_data.str = ft_concat(repeat_char(g_current_data.sign, 1), g_current_data.str);
	if (g_current_data.flags[OCTOTORP] && ft_strcmp(g_current_data.str.str, "0") != 0)
	{
		g_current_data.str.str = ft_strjoindel(ft_strdup(g_current_data.upper == 0 ? "0x" : "0X"), g_current_data.str.str);
		g_current_data.str.len += 2;
	}
	if (g_current_data.upper == 0)
		ft_striter(g_current_data.str.str, ft_tolowercase);
}

void		flag_management_f(void)
{
	if (g_current_data.flags[SPACE] && g_current_data.sign == '+')
		g_current_data.str = ft_concat(repeat_char(' ', 1), g_current_data.str);
}

void		init_flags_convertions(void)
{
	ft_bzero(flags_convertions, sizeof(flags_convertions));
	flags_convertions[D] = flag_management_d;
	flags_convertions[I] = flag_management_i;
	flags_convertions[O] = flag_management_o;
	flags_convertions[X] = flag_management_x;
}