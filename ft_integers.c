/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:31:57 by asybil            #+#    #+#             */
/*   Updated: 2020/08/24 18:26:42 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

static char g_number_arr[] = {'0', '1', '2', '3', '4', '5', '6', \
	'7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', '\0'};

void	convert_int(long long int src, int delim)
{
	long long int		tmp;
	static int			stat;

	tmp = 0;
	if (src == 0)
	{
		if (g_current_data.precision < 0)
			return ;
		g_current_data.str.str = ft_strdup("0");
		g_current_data.str.len = 1;
		return ;
	}
	stat++;
	tmp = (src % delim);
	tmp = (tmp + (tmp >> 31)) ^ (tmp >> 31);
	if (src / delim != 0)
		convert_int(src / delim, delim);
	else if (src / delim == 0)
	{
		g_current_data.str.len = stat;
		g_current_data.str.str = ft_strnew(g_current_data.str.len);
	}
	g_current_data.str.str[g_current_data.str.len - stat] = g_number_arr[tmp];
	stat--;
}

void	convert_unint(unsigned long long int src, int delim)
{
	int			tmp;
	static int	stat;

	tmp = 0;
	if (src == 0)
	{
		if (g_current_data.precision < 0)
			return ;
		g_current_data.str.str = ft_strdup("0");
		g_current_data.str.len = 1;
		return ;
	}
	stat++;
	tmp = src % delim;
	if (src / delim != 0)
		convert_unint(src / delim, delim);
	else if (src / delim == 0)
	{
		g_current_data.str.len = stat;
		g_current_data.str.str = ft_strnew(g_current_data.str.len);
	}
	g_current_data.str.str[g_current_data.str.len - stat] = g_number_arr[tmp];
	stat--;
}

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
	if (src == 0)
	{
		g_current_data.str.str = ft_strdup("0");
		g_current_data.str.len = 1;
		return ;
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
	g_current_data.str.str[g_current_data.str.len - stat] = g_number_arr[tmp];
	stat--;
}

char	*ft_itoa_base_unsigned(unsigned long long int n, int b)
{
	char	*new;
	int		len;
	int		digit;

	len = ft_numlen_base_unsigned(n, b);
	if (!(new = ft_strnew(len)))
		return (NULL);
	while (len--)
	{
		digit = ft_abs(n % b);
		new[len] = (digit < 10) ? digit + 48 : digit + 55;
		n /= b;
	}
	return (new);
}
