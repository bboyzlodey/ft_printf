/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:30:18 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:32:49 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	set_spec(char form)
{
	if (form == 'i')
		g_current_data.spec = I;
	else if (form == 'd')
		g_current_data.spec = D;
	else if (form == 'x' || form == 'X')
		g_current_data.spec = X;
	else if (form == 'o')
		g_current_data.spec = O;
	else if (form == 'u')
		g_current_data.spec = U;
	else if (form == 'f')
		g_current_data.spec = F;
	else if (form == 's')
		g_current_data.spec = S;
	else if (form == 'c')
		g_current_data.spec = C;
	else if (form == 'p')
		g_current_data.spec = P;
}

static void	init_integer_type(char *f)
{
	char	form;

	form = *f;
	g_current_data.type = INTEGERS;
	if (form == 'd' || form == 'i')
		g_current_data.delimeters = DEC;
	else if (form == 'x' || form == 'X')
	{
		g_current_data.delimeters = HEX;
		g_current_data.upper = (form == 'X') ? 1 : 0;
	}
	else
		g_current_data.delimeters = OCT;
}

int			find_type(char *f)
{
	char	form;

	form = *f;
	set_spec(*f);
	if (form == 'x' || form == 'X' || form == 'd' || form == 'i' || form == 'o')
		init_integer_type(f);
	else if (form == 'f')
		g_current_data.type = FLOAT;
	else if (form == 'c')
		g_current_data.type = CHAR;
	else if (form == 's')
		g_current_data.type = STRING;
	else if (form == 'p')
	{
		g_current_data.type = POINTER;
		g_current_data.delimeters = HEX;
	}
	else if (form == 'u')
	{
		g_current_data.type = UNSIGNED;
		g_current_data.delimeters = DEC;
	}
	else
		return (0);
	return (1);
}

int			find_precision(char *prec)
{
	int count;

	count = 0;
	if (prec[count] == '.')
	{
		count++;
		g_current_data.precision = ft_atoi(prec + count);
		while (ft_isdigit(prec[count]))
			count++;
	}
	if (count >= 1 && g_current_data.precision == 0)
		g_current_data.precision = -1;
	return (count);
}

int			find_width(char *width)
{
	int count;

	count = 0;
	g_current_data.width = ft_atoi(width);
	while (ft_isdigit(width[count]))
	{
		count++;
	}
	return (count);
}
