/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_long_num_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:38:03 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:59:22 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void			init_t_long_num(t_long_num *tmp)
{
	ft_bzero(&(tmp->value), sizeof(tmp->value));
	tmp->value[0] = 1;
	tmp->digits = 1;
}

static t_long_num	mul_positive(t_long_num tmp)
{
	int	i;

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
	return (tmp);
}

t_long_num			positive_pow(int exp)
{
	t_long_num tmp;

	init_t_long_num(&tmp);
	while (exp > 0)
	{
		tmp = mul_positive(tmp);
		exp--;
	}
	tmp.digits = count_digits(tmp);
	return (tmp);
}

t_long_num			mul_long(t_long_num a, int b)
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
