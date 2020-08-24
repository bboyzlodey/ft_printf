/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:07:01 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:15:15 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	calculate(void)
{
	validate_precision();
	if (g_current_data.type == STRING)
		str_calculate();
	else if (g_current_data.type == CHAR)
		char_calculate();
	else if (g_current_data.type == INTEGERS || \
	g_current_data.type == UNSIGNED)
		integer_calculate();
	else if (g_current_data.type == POINTER)
		pointer_calculate();
	else if (g_current_data.type == FLOAT)
		float_calculate();
}
