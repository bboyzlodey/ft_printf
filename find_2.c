/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:32:44 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:33:40 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	isflag(char c)
{
	if (c == '+' || c == '-' || c == ' ' || c == '#' || c == '0')
		return (1);
	return (0);
}

int			find_flags(char *format)
{
	int count;

	count = 0;
	while (isflag(format[count]))
	{
		if (format[count] == '+')
			g_current_data.flags[PLUS] = PLUS;
		if (format[count] == '-')
			g_current_data.flags[MINUS] = MINUS;
		if (format[count] == '0')
			g_current_data.flags[NULL_FLAG] = NULL_FLAG;
		if (format[count] == ' ')
			g_current_data.flags[SPACE] = SPACE;
		if (format[count] == '#')
			g_current_data.flags[OCTOTORP] = OCTOTORP;
		count++;
	}
	return (count);
}

int			find_size(char *format)
{
	if (format[0] == 'h')
	{
		g_current_data.size = (format[1] == 'h') ? HH : H;
		return (format[1] == 'h' ? 2 : 1);
	}
	else if (format[0] == 'l')
	{
		g_current_data.size = (format[1] == 'l') ? LL : L;
		return (format[1] == 'l' ? 2 : 1);
	}
	else if (format[0] == 'L')
	{
		g_current_data.size = L_BIG;
		return (1);
	}
	else
		g_current_data.size = -1;
	return (0);
}
