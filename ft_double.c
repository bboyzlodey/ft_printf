/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 15:45:11 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:49:41 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long long int	double_to_unint(double f)
{
	return (*(unsigned long long int*)&f);
}

unsigned long long int	manti_calc_double(unsigned long long int tmp)
{
	return (tmp & 0x00FFFFFFFFFFFFFllu);
}

int						exp_calc_double(unsigned long long int raw)
{
	return (raw << 1) >> 53;
}

t_simple_double			*get_structure_double(void)
{
	t_simple_double *tmp;

	tmp = (t_simple_double*)malloc(sizeof(t_simple_double));
	return (tmp);
}
