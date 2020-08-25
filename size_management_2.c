/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_management_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:36:29 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:36:32 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	size_management_float(void)
{
	double		d;
	long double	ld;

	d = 0;
	ld = 0;
	if (g_current_data.size == L)
	{
		d = (va_arg(g_current_data.list, double));
		g_current_data.value = ft_memcpy(ft_memalloc(sizeof(d)), \
		&d, sizeof(d));
	}
	else if (g_current_data.size == L_BIG)
	{
		ld = va_arg(g_current_data.list, long double);
		g_current_data.value = ft_memcpy(ft_memalloc(sizeof(ld)), \
		&ld, sizeof(ld));
	}
	else
	{
		d = va_arg(g_current_data.list, double);
		g_current_data.value = ft_memcpy(ft_memalloc(sizeof(d)), \
		&d, sizeof(d));
	}
}

void	init_size_management(void)
{
	if (g_current_data.type == INTEGERS)
		size_management_integers();
	else if (g_current_data.type == UNSIGNED)
		size_management_unsigned();
	else if (g_current_data.type == POINTER)
		size_management_ponter();
	else if (g_current_data.type == STRING)
		size_management_string();
	else if (g_current_data.type == FLOAT)
		size_management_float();
	else if (g_current_data.type == CHAR)
		size_management_char();
}
