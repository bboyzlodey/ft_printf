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
	if (g_current_data.type == INTEGERS)
	{
		g_current_data.sign = (*((long long*)g_current_data.value)) >= 0 ? '+' : '-';
		convert_int(*((long long*)g_current_data.value), g_current_data.delimtr);
	}
	else if (g_current_data.type == UNSIGNED)
	{
		convert_unint(*((unsigned long long*)g_current_data.value),g_current_data.delimtr));
	}
}

void	float_calculate(void)
{
	if (g_current_data.type == FLOAT && g_current_data.spec = F)
	{
		if (g_current_data.precision == 0)
			g_current_data.precision = DEFAULT_PRECISION_FLOAT;
		convert_float_str((*(float *)g_current_data.value));
	}
}

void	str_calculate(void)
{
	char	*str;

	str = NULL;
	str = ((char *)g_current_data.value);
	g_current_data.str.str = str;
	g_current_data.str.len = ft_strlen(str);
}

void	char_calculate(void)
{
	char	*ch;
	
	ch = ((char *)g_current_data.value);
	g_current_data.str.str = ch;
	g_current_data.str.len = ft_strlen(ch);
}

void	pointer_calculate(void)
{
	size_t	val;

	val = (*(size_t *)g_current_data.value);
	
}

void	calculate(void)
{
	if (g_current_data.spec = S)
		str_calculate();
	else if (g_current_data.spec = C)
		float_calculate();
	
}