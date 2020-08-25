/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_double.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:31:57 by asybil            #+#    #+#             */
/*   Updated: 2020/08/24 18:26:42 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long double	ft_ldmod(long double x, long double y)
{
	x = x < 0 ? x * -1 : x;
	y = y < 0 ? y * -1 : y;
	return (x - (unsigned long long int)(x / y) * y);
}

int			ft_round_half_to_even(long double nbr, int precision)
{
	size_t is_even;
	size_t is_half;

	nbr = ft_ldmod(nbr * ft_pow(10, precision), 2);
	is_even = ((int)nbr == 0);
	if (is_even)
	{
		is_half = (nbr >= 0.49 && nbr <= 0.5);
		if (is_half)
			return (1);
	}
	return (0);
}

long double	ft_dtoa_round(long double nbr, int precision)
{
	size_t half_to_even;

	half_to_even = ft_round_half_to_even(nbr, precision);
	if (half_to_even)
		;
	else if (nbr > 0)
		nbr = nbr + (ft_pow(10, -precision - 1) * 5.0);
	else if (nbr < 0)
		nbr = nbr - (ft_pow(10, -precision - 1) * 5.0);
	return (nbr);
}

char		*ft_dtoa(long double d, size_t p, size_t base)
{
	long double				a;
	char					*ptr1;
	char					*ptr2;

	a = (d < 0) ? (ft_dtoa_round(d, p) * -1) : ft_dtoa_round(d, p);
	ptr1 = ft_itoa_base_unsigned((unsigned long long int)a, base);
	a = (a - (unsigned long long int)a) * ft_pow(base, p);
	ptr2 = ft_itoa_base_unsigned(a, base);
	if ((a = ft_strlen(ptr2)) != p)
		while (a++ < p)
			ft_strappend_ox("0", &ptr2);
	if (d < 0 && base == 10)
		ft_strappend_ox("-", &ptr1);
	if (p > 0 && base == 10)
	{
		ft_strappend_xo(&ptr1, ".");
		ft_strappend_xx(&ptr1, &ptr2);
	}
	else
		ft_strdel(&ptr2);
	return (ptr1);
}

void		convert_l_double_str(long double f)
{
	if (g_current_data.precision > 0)
		g_current_data.str.str = ft_dtoa(f, g_current_data.precision, 10);
	else
		g_current_data.str.str = ft_dtoa(f, 6, 10);
	g_current_data.str.len = ft_strlen(g_current_data.str.str);
}
