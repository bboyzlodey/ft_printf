/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:07:01 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:15:15 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	calculate(void)
{
	validate_precision();
	if (g_current_data.type == STRING)
		str_calculate();
	else if (g_current_data.type == CHAR)
		char_calculate();
	else if (g_current_data.type == INTEGERS || \
	g_current_data.type == UNSIGNED)
		integer_calculate();
	else if (g_current_data.type == POINTER)
		pointer_calculate();
	else if (g_current_data.type == FLOAT)
		float_calculate();
}

void	char_calculate(void)
{
	char	*ch;

	ch = ((char *)g_current_data.value);
	g_current_data.str.str = ft_strncpy(ft_strnew(1), ch, 1);
	g_current_data.str.len = 1;
}

void	pointer_calculate(void)
{
	size_t	val;

	val = *((size_t*)g_current_data.value);
	convert_size_t_int(val, g_current_data.delimeters);
	g_current_data.str.str = ft_strjoindel(ft_strdup("0x"), \
	g_current_data.str.str);
	g_current_data.str.len += 2;
	ft_striter(g_current_data.str.str, ft_tolowercase);
}
