/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_long_num_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 07:37:54 by asybil            #+#    #+#             */
/*   Updated: 2020/08/24 16:39:08 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_string	integer_part_str(t_long_num num)
{
	char		*tmp;
	int			i;
	t_string	str;

	num.digits = count_digits(num);
	i = num.digits - 1;
	tmp = NULL;
	str.str = NULL;
	while (i >= 0)
	{
		tmp = ft_itoa(num.value[i]);
		str.str = ft_strjoindel(str.str, tmp);
		i--;
	}
	str.len = ft_strlen(str.str);
	return (str);
}

t_string	real_part_str(t_real_num real, int precision)
{
	t_string	str;
	t_long_num	tmp;
	int			i;
	int			count;

	count = 0;
	i = real.negative_pow - 1;
	tmp = real.number;
	str.str = ft_strdup(".");
	count = 0;
	while (i >= 0 && count < precision)
	{
		str.str = ft_strjoindel(str.str, ft_itoa(tmp.value[i]));
		i--;
		count++;
	}
	while (count < precision)
	{
		str.str = ft_strjoindel(str.str, ft_itoa(0));
		count++;
	}
	str.len = ft_strlen(str.str);
	return (str);
}
