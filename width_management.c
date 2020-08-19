/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 06:20:14 by asybil            #+#    #+#             */
/*   Updated: 2020/08/16 06:29:14 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	width_management(void)
{
	int size;

	size = g_current_data.width - g_current_data.str.len;
	if (size <= 0)
		return;
	if (g_current_data.flags[NULL_FLAG] == NULL_FLAG)
	{
		g_current_data.str = ft_concat(repeat_char('0', size), g_current_data.str);
		if (g_current_data.flags[PLUS] == PLUS || g_current_data.sign == '-')
			g_current_data.str = ft_concat(repeat_char(g_current_data.sign, size), g_current_data.str);
	}
	else
	{
		g_current_data.str = ft_concat(repeat_char(' ', size), g_current_data.str);
	}
}