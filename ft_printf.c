/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:33:59 by asybil            #+#    #+#             */
/*   Updated: 2020/08/12 17:26:05 by jsabina          ###   ########.fr       */
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
	if (form == 'd' || form == 'i')
		g_current_data.type = INTEGERS;
	return 0;
	
}

int find_precision(char *prec)
{
	
}

int find_width(char *width)
{
	
}

int find_flags(char *flags)
{
	int i = 0;
	
	if (*flags == '+')
		g_current_data.flags[i++] = PLUS;
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
	
int		print_before_procent(char *format)
{
	int i;

	i = 0;
	while (format[i])
	{	
		if (format[i] != '%')
			i++;
		if (format[i] == '%' && format[i + 1] == '%')
			i++;
		else if (format[i] == '%')
			write (1, format + i, i);
			return (i);
	}
}

	
	while (format[i])
	{
		if (format[i] == '%')
			creat_q(parsing(&format[++i]));
		i++;
	}
	va_end(list);
	return 1;
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