/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision_management.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 06:14:30 by asybil            #+#    #+#             */
/*   Updated: 2020/08/24 16:17:58 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	precision_management(void)
{
	int size;

	size = g_current_data.precision - g_current_data.str.len;
	if (g_current_data.spec == F || g_current_data.spec == P)
		return ;
	if (size > 0)
		g_current_data.str = ft_concat(repeat_char(\
		'0', size), g_current_data.str);
}

void	validate_precision(void)
{
	if (g_current_data.type != INTEGERS && g_current_data.type \
	!= UNSIGNED && g_current_data.precision == -1
	&& g_current_data.spec != S)
		g_current_data.precision = 0;
}
