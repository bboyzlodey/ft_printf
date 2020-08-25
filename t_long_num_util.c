/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_long_num_util.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 07:22:27 by asybil            #+#    #+#             */
/*   Updated: 2020/08/24 19:01:02 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_long_num	calcutate_integer_double(t_simple_double *f)
{
	int					current_exp;
	int					count_bits;
	unsigned long long	mask;
	t_long_num			accum;

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

t_real_num	calcutate_real_double(t_simple_double *fl)
{
	t_real_num			result;
	int					exp;
	unsigned long long	mask;
	t_long_num			tmp;

	exp = (fl->current_exp) * (-1);
	result.negative_pow = 0;
	result.number.digits = 0;
	mask = 1;
	ft_bzero(&result.number.value, sizeof(result.number.value));
	while (fl->current_bit >= 0)
	{
		result.number = mul_long(result.number, 10);
		if ((fl->mantissa & (mask << fl->current_bit)) != 0)
		{
			tmp = base_pow(5, exp);
			result.number = summ_big_int(result.number, tmp);
			ft_bzero(&tmp.value, sizeof(tmp.value));
		}
		exp++;
		fl->current_bit--;
		result.negative_pow++;
		result.number.digits++;
	}
	return (result);
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
