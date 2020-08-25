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

static void	signed_sized(void)
{
	g_current_data.sign = (*((long long*)g_current_data.value)) >= 0 \
	? '+' : '-';
	if (g_current_data.size == LL)
		convert_int(*((long long*)g_current_data.value),\
		g_current_data.delimeters);
	else if (g_current_data.size == L)
		convert_int(*((long*)g_current_data.value),\
		g_current_data.delimeters);
	else if (g_current_data.size == H)
		convert_int(*((short*)g_current_data.value),\
		g_current_data.delimeters);
	else if (g_current_data.size == HH)
		convert_int(*((char*)g_current_data.value),\
		g_current_data.delimeters);
	else
		convert_int(*((int*)g_current_data.value),\
		g_current_data.delimeters);
}

void		integer_calculate(void)
{
	if (g_current_data.type == INTEGERS && \
	g_current_data.delimeters != HEX && g_current_data.delimeters != OCT)
		signed_sized();
	else if (g_current_data.type == UNSIGNED || \
	g_current_data.delimeters == HEX || g_current_data.delimeters == OCT)
	{
		if (g_current_data.size == LL)
			convert_unint(*((unsigned long long*)g_current_data.value), \
			g_current_data.delimeters);
		else if (g_current_data.size == L)
			convert_unint(*((unsigned long*)g_current_data.value), \
			g_current_data.delimeters);
		else if (g_current_data.size == H)
			convert_unint(*((unsigned short*)g_current_data.value), \
			g_current_data.delimeters);
		else if (g_current_data.size == HH)
			convert_unint(*((unsigned char*)g_current_data.value), \
			g_current_data.delimeters);
		else
			convert_unint(*((unsigned*)g_current_data.value), \
			g_current_data.delimeters);
	}
}

void		float_calculate(void)
{
	if (g_current_data.type == FLOAT)
	{
		if (g_current_data.precision == 0)
			g_current_data.precision = DEFAULT_PRECISION_FLOAT;
		if (g_current_data.size == L_BIG)
			convert_l_double_str((*(long double *)g_current_data.value));
		else
			convert_l_double_str((*(double *)g_current_data.value));
	}
}

void		str_calculate(void)
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
	else if (g_current_data.precision >= 0)
		g_current_data.str.str = ft_strdup(str);
	g_current_data.str.len = ft_strlen(g_current_data.str.str);
	g_current_data.precision = 0;
}
