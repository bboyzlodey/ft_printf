/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_long_num_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:38:03 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:38:52 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_long_num		positive_pow(int exp)
{
	t_long_num tmp;
	ft_bzero(&tmp.value, sizeof(tmp.value));
	tmp.value[0] = 1;
	tmp.digits = 1;
	int i;

	i = 0;
	while (exp > 0)
	{
		i = 0;
		while (i < MAX_DIGITS)
		{
			tmp.value[i] *= 2;
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
		exp--;
	}
	tmp.digits = count_digits(tmp);
	return (tmp);
}

t_long_num		base_pow(int base, int exp)
{
	t_long_num tmp;
	ft_bzero(&tmp.value, sizeof(tmp.value));
	tmp.value[0] = 1;
	tmp.digits = 1;
	int i;

	i = 0;
	while (exp > 0)
	{
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
		exp--;
	}
	tmp.digits = count_digits(tmp);
	return (tmp);
}
