/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:31:57 by asybil            #+#    #+#             */
/*   Updated: 2020/07/28 20:31:57 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

/**
 ** Статический массив, который используется при конвертации числа в строку
 * */
static char number_arr[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', '\0'};

/**
**	convert_int 	- вернет строковое представление числа для long long int 
**	convert_unint	- вернет строковое представление числа для long long unsigned int
**/

/**
 **  tmp - переменная, которая хранит остаток деления от delim
 ** 	В этой convert_int обрабатывается знаковый тип.
 ** 	У нас может быть отрицательное число, поэтому
 ** 	остаток от деления тоже может быть отрицательным.
 ** 	tmp = (tmp + (tmp >> 31)) ^ (tmp >> 31); - это формула для получения числа по модулю.
**/

void	convert_int(long long int src, int delim)
{
	long long int			tmp = 0;
	static int	stat;

	stat++;
	if(src == 0)
	{
		g_current_data.str.str = ft_strdup("0");
		g_current_data.str.len = 1;
		return;
	}
	tmp = (src % delim);
	tmp = (tmp + (tmp >> 31)) ^ (tmp >> 31);
	if (src / delim != 0)
	{
		convert_int(src / delim, delim);
	}
	else if ( src / delim == 0)
	{
		g_current_data.str.len = src > 0 ? stat : stat + 1;
		g_current_data.str.str = ft_strnew(g_current_data.str.len);
		g_current_data.str.str[0] = '-';
	}
	g_current_data.str.str[g_current_data.str.len - stat] = number_arr[tmp];
	stat--;
}

void	convert_unint(unsigned long long int src, int delim)
{
	int			tmp = 0;
	static int	stat;

	stat++;
	if(src == 0)
	{
		if (g_current_data.precision < 0)
			return;
		g_current_data.str.str = ft_strdup("0");
		g_current_data.str.len = 1;
		return;
	}
	tmp = src % delim;
	if (src / delim != 0)
	{
		convert_unint(src / delim, delim);
	}
	else if (src / delim == 0)
	{
		g_current_data.str.len = stat;
		g_current_data.str.str = ft_strnew(g_current_data.str.len);
	}
	g_current_data.str.str[g_current_data.str.len - stat] = number_arr[tmp];
	stat--;
}

/**
 ** 	Вспомогательная функция, которая строку приводит к нижнему регистру.
 ** 	Это актуально для флага x
 **/
void	ft_tolowercase(char *ptr)
{
	ptr[0] = (char)ft_tolower(*ptr);
}

void	convert_size_t_int(size_t src, int delim)
{
	size_t		tmp;
	static int	stat;

	stat++;
	tmp = src % delim;
	if(src == 0)
	{
		g_current_data.str.str = ft_strdup("0");
		g_current_data.str.len = 1;
		return;
	}
	if (src / delim != 0)
	{
		convert_size_t_int(src / delim, delim);
	}
	else if (src / delim == 0)
	{
		g_current_data.str.len = stat;
		g_current_data.str.str = ft_strnew(g_current_data.str.len);
	}
	g_current_data.str.str[g_current_data.str.len - stat] = number_arr[tmp];
	stat--;
}
