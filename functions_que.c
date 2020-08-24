/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_que.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 15:33:56 by jsabina           #+#    #+#             */
/*   Updated: 2020/08/24 16:10:58 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	set_func_que(void)
{
	int	i;

	i = 0;
	g_current_data.que[i++] = calculate;
	g_current_data.que[i++] = precision_management;
	g_current_data.que[i++] = validate_precision;
	g_current_data.que[i++] = remove_ignored_flags;
	if (g_current_data.flags[NULL_FLAG] == NULL_FLAG)
	{
		g_current_data.que[i++] = width_management;
		g_current_data.que[i++] = flag_management;
	}
	else
	{
		g_current_data.que[i++] = flag_management;
		g_current_data.que[i++] = width_management;
	}
}

void	iterate_func_que(void)
{
	int	i;

	i = 0;
	while (i < MAX_FUNC_QUE_SIZE)
	{
		if (g_current_data.que[i] != NULL)
			g_current_data.que[i]();
		i++;
	}
}
