/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_long_num_util_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:40:34 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:41:20 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			count_digits(t_long_num count)
{
	int i;

	i = MAX_DIGITS - 1;
	while (count.value[i] == 0)
		i--;
	return (i + 1);
}
