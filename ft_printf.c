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

void     float_prog(double a) // double
{
    unsigned long int bits;
    int bit;
    int sing;
    int exp;

    bits = *(__uint128_t *)&a;
    sing = (bits >> 63) & 1;
    bit = 51;
    exp = ((bits >> 52) & 0x7ff) - 1023;
    int g = 63;
    while (g >= 0)
    {
        if (((bits >> g) & 1) == 1)
            printf("1");
        else 
            printf("0");
        if (g == 63 || g == 52)
            printf(" ");
        g--;
    }
}

// int		find_type(char	form)
// {
// 	if (form == 'd' || form == 'i')
// 		return (INTEGERS);
	
// }

int		find_type(char	form)
{
	g_current_data.type = (form == 'd' || form == 'i' || form == 'D' || form == 'I') ? INTEGERS : 0;
	g_current_data.type = (form == 'c' || form == 'C') ? CHAR : 0;
	g_current_data.type = (form == 's' || form == 'S') ? STRING : 0;
	g_current_data.type = (form == 'p' || form == 'P') ? POINTER : 0;
	g_current_data.type = (form == 'f' || form == 'F') ? FLOAT : 0;
	g_current_data.type = (form == 'o' || form == 'O' || form == 'u' || form == 'U' || form == 'x' || form == 'X') ? UNSIGNED : 0;
	g_current_data.delimeters = (form == 'o' || form == 'O') ? OCT : 0;
	g_current_data.delimeters = (form == 'u' || form == 'U') ? DEC : 0;
	g_current_data.delimeters = (form == 'x' || form ==  'X') ? HEX : 0;
	if (form ==  'X')
		g_current_data.upper = 1;
	return g_current_data.type == -1 ? 0 : 1;
}


int		ft_int_len(int	num)
{	
	int count;

	count = 0;
	while ((num / 10) > 0)
	{
		num = num / 10;
		count++;
	}
	count++;
	return count;
}


int find_precision(char *prec)  // пропускает точку и возвращает что и иширина
{
	int count;

	count = 0;
	if (prec == '.')
	{
		count++;
		g_current_data.precision = ft_atoi(prec + 1);
		count = ft_int_len(g_current_data.precision);
	}
	return count;
}



int find_width(char *width) // вернет количество на которое нужно сдвинуть
{
	int count;

	g_current_data.width = ft_atoi(width);
	count = ft_int_len(g_current_data.width);
	return count;
}

int		find_flags(char **format) // тоже что и ширина
{
	char form;
	int count;

	count = 0;
	form = **format;
	while (1)
	{
		if (form = '+')
			g_current_data.flags = PLUS;
		if (form = '-')
			g_current_data.flags = MINUS;
		if (form = '0')
			g_current_data.flags = NULL_FLAG;
		if (form = ' ')
			g_current_data.flags = SPACE;
		if (form = '#')
			g_current_data.flags = OCTOTORP;
		if (form != '+' || form != '-' || form != '0' || form != ' ' || form != '#')
			return count;
		count++;
		form++;
	}
}

int		parsing(const char *format)
{
	int		i;
	int		in;
	char	*tmp;

	i = -1;
	in = -1;
	tmp = format;
	while (format[++i])
		while (++in < 5)
			if (*(g_current_data.pars[in])(&tmp) == DONE_PARS)
				break;
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
	g_current_data.pars[0] = find_flags(char *);
	g_current_data.pars[1] = find_wid(char *);
	g_current_data.pars[2] = find_pres(char *);
	g_current_data.pars[3] = find_size(char *);
	g_current_data.pars[4] = find_type(char *);
	g_current_data.width = 0;
	g_current_data.precision = -1;
	g_current_data.skip = 0;
}

int		ft_printf(const char *format, ...)
{
	va_list list;
	int i;

	i = 0;
	va_start(list, format);
	init_struct_data();
	while (format[i])
	{
		if (format[i] == '%')
			creat_q(parsing(&format[++i]));
		i++;
	}
	va_end(list);
	return 1;
}
	
int print_percent(char **format, char **next_percent)
{
	int		count;

	count = 0;
	write(1, *format, *next_percent - *format);
	count += *next_percent - *format;
	*format = *next_percent;
	return (count);
}


int		print_before_procent(char *format)
{
	int		count;
	int		len;
	char *next_percent;
	
	count = 0;
	
	next_percent = ft_strchr(format, '%');
	while (*format != '\0' && next_percent) {
		count += print_percent(&format, &next_percent);
		if (*(format + 1) == '%') {
			write(1, "%", 1);
			format++;
			count++;
		}
		else
			return (count);
		format++;
		next_percent = ft_strchr(format, '%');
	}
	len = ft_strlen(format);
	write(1, format, len);
	count += len;
	return (count);
}


	

int main()
{
    // double a = 12.358;
	double b = 90.1;
	float a = (float)90.1;
	float c = 90.1;
	a;
	printf("vqevvdvrv%d10.8d\n", 1);
    // float_prog(a);
}
