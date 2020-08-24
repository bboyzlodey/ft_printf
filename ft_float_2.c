/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:22:31 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:25:49 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define FLOAT_SIZE ((sizeof(float) * 8))

static simple_float	*init_floats(float f, simple_float *toInit)
{
	unsigned int fi = float_to_unint(f);

	fi = float_to_unint(f);
	toInit->sign = f >= 0 ? 0 : -1;
	toInit->exponenta = exp_calc(fi) - 127;
	toInit->mantissa = manti_calc(fi) | (1 << 23);
	toInit->precision = g_current_data.precision;
	return (toInit);
}

void				convert_float_str(float f)
{
	simple_float	*flo;
	t_string		integer;
	t_string		real;

	flo = init_floats(f, get_structure());
	flo->integer_part = calcutate_integer(flo);
	flo->real_part = calcutate_real(flo);
	round_simple_float(flo);
	integer = integer_part_str(flo->integer_part);
	real = real_part_str(flo->real_part, g_current_data.precision);
	g_current_data.str = ft_concat(integer, real);
	free(flo);
	flo = NULL;
}
