/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:33:59 by asybil            #+#    #+#             */
/*   Updated: 2020/07/28 20:49:09 by asybil           ###   ########.fr       */
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

int		find_type(char	form)
{
	if (form == 'd' || form == 'i')
		return (INTEGERS);
	
}

int		parsing(const char *format)
{
	int i, in;

	i = 0;
	in = -1;
	while (++in < 5)
		i += *(g_current_data.pars[in])(&format[i]);
	// i += find_flags(&format[i]);
	// i += find_wid(&format[i]);
	// i += find_pres(&format[i]);
	// i += find_size(&format[i]);
	// i += find_type(&format[i]);
	
}

void	creat_struct_data(void)
{
	int i;

	i = -1;
	ft_bzero(g_current_data.flags, 6);
	while (++i < 10)
		g_current_data.que[i] = NULL;
	g_current_data.str.str = NULL;
	g_current_data.print = ft_printstring;

}

int ft_printf(const char *format, ...)
{
	va_list list;
	int i;

	i = 0;
	va_start(list, format);
	creat_struct_data();
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