/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:33:59 by asybil            #+#    #+#             */
/*   Updated: 2020/08/16 08:10:18 by asybil           ###   ########.fr       */
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

int		find_type(char	*f)
{
	char	form;

	form = *f;
	set_spec(*f);
	if (form == 'x' || form == 'X' || form == 'd' || form == 'i' || form == 'o')
	{
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
		return 0;
	return 1;
}


int find_precision(char *prec)  // пропускает точку и возвращает что и иширина
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
	return count;
}



int find_width(char *width) // вернет количество на которое нужно сдвинуть
{
	int count;

	count = 0;
	g_current_data.width = ft_atoi(width);
	while (ft_isdigit(width[count]))
	{
		count++;
	}
	return count;
}

static int	isflag(char c)
{
	if (c == '+' || c == '-' || c == ' ' || c == '#' || c == '0')
		return 1;
	return 0;
}

int		find_flags(char *format) // тоже что и ширина
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
	return count;
}

int		find_size(char *format)
{
	if (format[0] == 'h')
	{
		g_current_data.size = (format[1] == 'h') ? HH : H;
		return format[1] == 'h' ? 2 : 1;
	}
	else if (format[0] == 'l')
	{
		g_current_data.size = (format[1] == 'l') ? LL : L;
		return format[1] == 'l' ? 2 : 1;
	}
	else if (format[0] == 'L')
	{
		g_current_data.size = L_BIG;
		return 1;
	}
	else
		g_current_data.size = -1;
	return 0;
}
 void	init_struct_data(void)
 {
 	int i;
 	i = -1;
 	ft_bzero(g_current_data.flags, 6);
 	while (++i < 10)
 		g_current_data.que[i] = NULL;
 	g_current_data.str.str = NULL;
 	g_current_data.print = ft_printstring;
 	g_current_data.width = 0;
 	g_current_data.precision = -1;
 	g_current_data.skip = 0;
 }

static void evaluate(void)
{
	init_size_management();
	calculate();
	precision_management();
	flag_management();
	width_management();
	ft_printstring(g_current_data.str);
	global_free();
}

int		ft_printf(const char *format, ...)
{
	int i;

	i = 0;
	g_ft_printf_writed_count = 0;
	// init_struct_data();
	init_flags_convertions();
	initstructure();
	va_start(g_current_data.list, format);

	char *tmp;

	tmp = ft_strdup(format);
	// i += print_before_procent(((char *)tmp + i));
	while (tmp && tmp[i])
	{
		i += print_before_procent(((char *)tmp + i));
		if (tmp[i] == '%')
		{
			i++;
			i += find_flags(((char *)tmp + i));
			i += find_width(((char *)tmp + i));
			i += find_precision(((char *)tmp + i));
			i += find_size(((char *)tmp + i));
			i += find_type((((char *)tmp + i)));
			evaluate();
		}
	}
	va_end(g_current_data.list);
	ft_strdel(&tmp);
	return g_ft_printf_writed_count;
}

int		print_before_procent(char *format)
{
	int		count;
	int		skip;

	skip = 0;
	count = 0;
	while (format && format[count] && format[count] != '%')
	{
		count++;
	}
	skip = count;
	if (format && format[count] == '%' && format[count + 1] == '%')
		skip = (++count) + 1;
	(g_ft_printf_writed_count += write(1, format, count));
	return (skip);
}

