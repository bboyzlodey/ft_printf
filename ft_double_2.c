/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:17:51 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:20:42 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define FLOAT_SIZE ((sizeof(float) * 8))

simple_double			*init_double(double f, simple_double *toInit)
{
	unsigned long long int fi = double_to_unint(f);
	toInit->sign = f >= 0 ? 0 : -1;
	toInit->exponenta = exp_calc_double(fi) - 1023;
	toInit->mantissa = manti_calc_double(fi) | (1llu << 52);
	toInit->precision = g_current_data.precision;
	return (toInit);
}

void							convert_double_str(double f)
{
	simple_double	*flo;
	t_string		integer;
	t_string		real;

	flo = init_double(f, get_structure_double());
	flo->integer_part = calcutate_integer_double(flo);
	flo->real_part = calcutate_real_double(flo);
	round_simple_double(flo);
	integer = integer_part_str(flo->integer_part);
	if (integer.len == 0)
		integer = repeat_char('0', 1);
	real = real_part_str(flo->real_part, g_current_data.precision);
	g_current_data.str = ft_concat(integer, real);
	free(flo);
	flo = NULL;
}
