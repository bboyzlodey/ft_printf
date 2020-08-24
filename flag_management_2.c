/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_management_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:13:50 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:14:24 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		delete_flag(enum e_flags flag)
{
	g_current_data.flags[flag] = 0;
}

void			remove_ignored_flags(void)
{
	if (g_current_data.flags[PLUS] && g_current_data.flags[SPACE])
		delete_flag(SPACE);
	if ((g_current_data.flags[MINUS] && g_current_data.flags[NULL_FLAG]) ||\
		(g_current_data.precision > 0 && g_current_data.spec != F))
	{
		delete_flag(NULL_FLAG);
	}
}

void			flag_management(void)
{
	if (flags_convertions[g_current_data.spec] != NULL)
		flags_convertions[g_current_data.spec]();
}

void			init_flags_convertions(void)
{
	ft_bzero(flags_convertions, sizeof(flags_convertions));
	flags_convertions[D] = flag_management_d;
	flags_convertions[I] = flag_management_i;
	flags_convertions[O] = flag_management_o;
	flags_convertions[X] = flag_management_x;
}
