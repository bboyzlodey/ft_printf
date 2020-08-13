/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheidy <vheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 17:00:34 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/13 17:53:51 by vheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		find_flags(char **format)
{
	char form;

	form = **format;
	if (form == '#' && (*format)++ && g_current_data.skip++)
		g_current_data.flags[OCTOTORP] = OCTOTORP;
	if (form == ' ' && (*format)++ && g_current_data.skip++)
		g_current_data.flags[SPACE] = SPACE;
	if (form == '-' && (*format)++ && g_current_data.skip++)
		g_current_data.flags[MINUS] = MINUS;
	if (form == '+' && (*format)++ && g_current_data.skip++)
		g_current_data.flags[PLUS] = PLUS;
	if (form == '0' && (*format)++ && g_current_data.skip++)
		g_current_data.flags[NULL_FLAG] = NULL_FLAG;
	return (0);
}

int		find_wid_and_pres(char **format)
{
	int val;

	if ((val = ft_atoi(format)))
	{
		g_current_data.width = val;
		
	}
	if (*format[0] == '.')
	{
		g_current_data.skip++;
		while (*format[1] == '0' && (*format)++)
			g_current_data.skip++;
		if (val = ft_atoi(&format[1]))
		{
			g_current_data.precision = val;
		}
	}
	return (0);
}
