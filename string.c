/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:32:07 by asybil            #+#    #+#             */
/*   Updated: 2020/08/24 16:22:20 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

void		ft_printstring(t_string str)
{
	if (str.str == 0)
		return ;
	g_ft_printf_writed_count += write(1, str.str, str.len);
}

t_string	ft_concat(t_string a, t_string b)
{
	t_string	result;

	result.str = ft_strjoindel(a.str, b.str);
	result.len = a.len + b.len;
	return (result);
}

t_string	repeat_char(char a, size_t size)
{
	t_string	tmp;

	tmp.str = ft_memset(ft_strnew(size), a, size);
	tmp.len = size;
	return (tmp);
}
