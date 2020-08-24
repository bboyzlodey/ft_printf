/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_long_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 07:14:58 by asybil            #+#    #+#             */
/*   Updated: 2020/08/24 18:56:07 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			round_integer_part(simple_float *f)
{
	f->integer_part = summ_big_int(f->real_part.number, base_pow(10, 3));
}

void			round_simple_double(simple_double *f)
{
	int i;
	int	old_digits;

	old_digits = f->real_part.number.digits;
	i = f->real_part.number.digits - f->precision - 1;
	if (i > 0 && i < old_digits - 1)
	{
		if (f->real_part.number.value[i - 1] > 5)
		{
			f->real_part.number = summ_big_int(f->real_part.number, \
			base_pow(10, i));
		}
		else if (i > 1 && i < 99 && (f->real_part.number.value\
		[i - 1] == 5 && f->real_part.number.value[i] % 2 == 1))
		{
			f->real_part.number = summ_big_int(f->real_part.number, \
			base_pow(10, i));
		}
		if (old_digits < f->real_part.number.digits)
		{
			f->real_part.number.digits--;
			f->integer_part = summ_big_int(f->integer_part, base_pow(10, 0));
		}
	}
	if ((i == (old_digits - 1)) && (f->real_part.number.value[i - 1] > 5))
		f->integer_part = summ_big_int(f->integer_part, base_pow(10, 0));
}

void			round_simple_float(simple_float *f)
{
	int i;
	int	old_digits;

	old_digits = f->real_part.number.digits;
	i = f->real_part.number.digits - f->precision - 1;
	if (i > 0 && i < old_digits - 1)
	{
		if (f->real_part.number.value[i - 1] > 5)
		{
			f->real_part.number = summ_big_int(f->real_part.number, \
			base_pow(10, i));
		}
		else if (i > 1 && i < 99 && (f->real_part.number.value[i - 1] \
		== 5 && f->real_part.number.value[i] % 2 == 1))
		{
			f->real_part.number = summ_big_int(f->real_part.number, \
			base_pow(10, i));
		}
		if (old_digits < f->real_part.number.digits)
		{
			f->real_part.number.digits--;
			f->integer_part = summ_big_int(f->integer_part, base_pow(10, 0));
		}
	}
	if ((i == (old_digits - 1)) && (f->real_part.number.value[i - 1] > 5))
		f->integer_part = summ_big_int(f->integer_part, base_pow(10, 0));
}

t_long_num		summ_big_int(t_long_num one, t_long_num two)
{
	int		max;
	int		i;
	int		c;

	max = one.digits > two.digits ? one.digits : two.digits;
	i = 0;
	c = 0;
	while (i <= max)
	{
		c = c + one.value[i] + two.value[i];
		one.value[i] = c % BIG_INT_BASE;
		c = c / BIG_INT_BASE;
		i++;
	}
	if (c > 0)
	{
		max = max + 1;
		one.value[max] = c;
	}
	one.digits = max;
	return (one);
}

t_long_num		mul_long(t_long_num a, int b)
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (i < a.digits)
	{
		a.value[i] = a.value[i] * b + c;
		c = a.value[i] / 10;
		a.value[i] = a.value[i] % 10;
		i++;
	}
	while (c > 0)
	{
		a.digits++;
		a.value[a.digits - 1] = c % 10;
		c = c / 10;
	}
	return (a);
}
