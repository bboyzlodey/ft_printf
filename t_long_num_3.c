/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_long_num_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:38:03 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:59:22 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_long_num	mul_positive_p(t_long_num tmp, int base)
{
	int	i;

	i = 0;
	while (i < MAX_DIGITS)
	{
		tmp.value[i] *= base;
		i++;
	}
	i = 0;
	while (i < MAX_DIGITS - 1)
	{
		if (tmp.value[i] >= BIG_INT_BASE)
		{
			tmp.value[i + 1] += tmp.value[i] / BIG_INT_BASE;
			tmp.value[i] %= BIG_INT_BASE;
		}
		i++;
	}
	return (tmp);
}

t_long_num			base_pow(int base, int exp)
{
	t_long_num tmp;

	tmp.value[0] = 1;
	tmp.digits = 1;
	ft_bzero(&tmp.value, sizeof(tmp.value));
	while (exp > 0)
	{
		tmp = mul_positive_p(tmp, base);
		exp--;
	}
	tmp.digits = count_digits(tmp);
	return (tmp);
}
