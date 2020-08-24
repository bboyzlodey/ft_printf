/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_long_num_util.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 07:22:27 by asybil            #+#    #+#             */
/*   Updated: 2020/08/24 18:40:18 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_real_num	calcutate_real(simple_float *fl)
{
	t_real_num result;
	int exp;
	int current_bit;
	int mask;
	int mantissa;
	t_long_num tmp;
	exp = (fl->current_exp) * (-1);
	current_bit = fl->current_bit;
	mask = 1;
	mantissa = (fl->mantissa);
	result.negative_pow = 0;
	result.number.digits = 0;
	ft_bzero(&result.number.value, sizeof(result.number.value));
	while (current_bit >= 0)
	{
		result.number = mul_long(result.number, 10);
		if ((mantissa & (mask << current_bit)) != 0)
		{
			tmp = base_pow(5, exp);
			result.number = summ_big_int(result.number, tmp);
			ft_bzero(&tmp.value, sizeof(tmp.value));
		}
		exp++;
		current_bit--;
		result.negative_pow++;
		result.number.digits++;
	}
	return (result);
}

t_real_num	calcutate_real_double(simple_double *fl)
{
	t_real_num			result;
	int					exp;
	int					current_bit;
	unsigned long long	mask;
	unsigned long long	mantissa;
	t_long_num tmp;
	exp = (fl->current_exp) * (-1);
	current_bit = fl->current_bit;
	result.negative_pow = 0;
	result.number.digits = 0;
	mask = 1;
	mantissa = (fl->mantissa);
	ft_bzero(&result.number.value, sizeof(result.number.value));
	while (current_bit >= 0)
	{
		result.number = mul_long(result.number, 10);
		if ((mantissa & (mask << current_bit)) != 0)
		{
			tmp = base_pow(5, exp);
			result.number = summ_big_int(result.number, tmp);
			ft_bzero(&tmp.value, sizeof(tmp.value));
		}
		exp++;
		current_bit--;
		result.negative_pow++;
		result.number.digits++;
	}
	return (result);
}

t_long_num	calcutate_integer(simple_float *f)
{
	int current_exp;
	int count_bits;
	int mask;
	t_long_num accum;
	current_exp = f->exponenta;
	count_bits = 23;
	mask = 1;
	ft_bzero(&accum.value, sizeof(accum.value));
	accum.digits = 0;
	while (current_exp >= 0 && count_bits)
	{
		if ((f->mantissa & (mask << count_bits)) != 0)
			accum = summ_big_int(accum, positive_pow(current_exp));
		current_exp--;
		count_bits--;
	}
	f->current_bit = count_bits;
	f->current_exp = current_exp;
	return (accum);
}

t_long_num	calcutate_integer_double(simple_double *f)
{
	int current_exp;
	int count_bits;
	unsigned long long mask;
	t_long_num accum;
	current_exp = f->exponenta;
	count_bits = 52;
	mask = 1;
	ft_bzero(&accum.value, sizeof(accum.value));
	accum.digits = 0;
	while (current_exp >= 0 && count_bits)
	{
		if ((f->mantissa & (mask << count_bits)) != 0)
			accum = summ_big_int(accum, positive_pow(current_exp));
		current_exp--;
		count_bits--;
	}
	f->current_bit = count_bits;
	f->current_exp = current_exp;
	return (accum);
}

int			comp_big_int(t_long_num a, t_long_num b)
{
	int i;

	i = a.digits - 1;
	if (a.digits > b.digits)
		return (1);
	else if (a.digits < b.digits)
		return (-1);
	while (i >= 0)
	{
		if (a.value[i] > b.value[i])
			return (1);
		else if (a.value[i] < b.value[i])
			return (-1);
		i--;
	}
	return (0);
}
