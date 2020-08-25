/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:33:59 by asybil            #+#    #+#             */
/*   Updated: 2020/08/24 18:53:59 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	evaluate(void)
{
	set_func_que();
	init_size_management();
	iterate_func_que();
	ft_printstring(g_current_data.str);
	global_free();
}

static void	init_ft_printf(void)
{
	g_ft_printf_writed_count = 0;
	init_flags_convertions();
	initstructure();
}

int			ft_printf(const char *format, ...)
{
	int		i;
	char	*tmp;

	i = 0;
	init_ft_printf();
	va_start(g_current_data.list, format);
	tmp = ft_strdup(format);
	while (tmp && tmp[i])
	{
		i += print_before_procent(((char *)tmp + i));
		if (tmp[i] == '%' && tmp[i + 1] != '%')
		{
			i++;
			i += find_flags(((char *)tmp + i));
			i += find_width(((char *)tmp + i));
			i += find_precision(((char *)tmp + i));
			i += find_size(((char *)tmp + i));
			i += find_type((((char *)tmp + i)));
			remove_ignored_flags();
			evaluate();
		}
	}
	va_end(g_current_data.list);
	ft_strdel(&tmp);
	return (g_ft_printf_writed_count);
}

int			print_before_procent(char *format)
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
