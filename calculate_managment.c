/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_managment.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 07:09:27 by asybil            #+#    #+#             */
/*   Updated: 2020/08/16 07:57:01 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	integer_calculate(void)
{
	if (g_current_data.type == INTEGERS && g_current_data.delimeters != HEX && g_current_data.delimeters != OCT)
	{
		g_current_data.sign = (*((long long*)g_current_data.value)) >= 0 ? '+' : '-';
		convert_int(*((long long*)g_current_data.value), g_current_data.delimeters);
	}
	else if (g_current_data.type == UNSIGNED)
	{
		convert_unint(*((unsigned long long*)g_current_data.value), g_current_data.delimeters);
	}
	else if (g_current_data.spec == X || g_current_data.spec == O)
	{
		if (g_current_data.size == LL)
			convert_unint(*((unsigned long long*)g_current_data.value), g_current_data.delimeters);
		else if (g_current_data.size == L)
			convert_unint(*((unsigned long*)g_current_data.value), g_current_data.delimeters);
		else
			convert_unint(*((unsigned*)g_current_data.value), g_current_data.delimeters);
	}
}

void	float_calculate(void)
{
	if (g_current_data.type == FLOAT)
	{
		if (g_current_data.precision == 0)
			g_current_data.precision = DEFAULT_PRECISION_FLOAT;
		convert_float_str((*(float *)g_current_data.value));
	}
}

void	str_calculate(void)
{
	char	*str;
	int		len;

	str = NULL;
	str = ((char *)g_current_data.value);
	len = ft_strlen(str);
	if (g_current_data.precision != 0 && len)
	{
		g_current_data.str.str = ft_strsub(str, 0, g_current_data.precision);
	}
	else
		g_current_data.str.str = ft_strdup(str);
	g_current_data.str.len = ft_strlen(g_current_data.str.str);
	g_current_data.precision = 0;
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
	g_current_data.str.str = ft_strjoindel(ft_strdup("0x"), g_current_data.str.str);
	g_current_data.str.len += 2;
	ft_striter(g_current_data.str.str, ft_tolowercase);
}

void	calculate(void)
{
	validate_precision();
	if (g_current_data.type == STRING)
		str_calculate();
	else if (g_current_data.type == CHAR)
		char_calculate();
	else if (g_current_data.type == INTEGERS || g_current_data.type == UNSIGNED)
		integer_calculate();
	else if (g_current_data.type == POINTER)
		pointer_calculate();
	else if (g_current_data.type == FLOAT)
		float_calculate();
}