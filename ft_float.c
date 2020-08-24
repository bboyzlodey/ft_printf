/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 20:05:44 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 18:53:04 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define FLOAT_SIZE ((sizeof(float) * 8))

static unsigned int		float_to_unint(float f)
{
	return (*(unsigned int*)&f);
}

static unsigned int		manti_calc(unsigned int tmp)
{
	return (tmp & 0x007FFFFFu);
}

int						exp_calc(unsigned int raw)
{
	return (raw << 1) >> 24;
}

int						sign_calc(unsigned int raw)
{
	return (raw >> 31);
}

static	simple_float	*get_structure(void)
{
	simple_float *tmp;

	tmp = (simple_float*)malloc(sizeof(simple_float));
	return (tmp);
}
