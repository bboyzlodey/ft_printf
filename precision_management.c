/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision_management.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 06:14:30 by asybil            #+#    #+#             */
/*   Updated: 2020/08/16 06:19:44 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void precision_management(void)
{
    int size;

    size = g_current_data.precision;
    if (g_current_data.spec = F)
        return;
    g_current_data.str = ft_concat(repeat_char('0', size),g_current_data.str);
}