/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_management.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 05:36:58 by asybil            #+#    #+#             */
/*   Updated: 2020/08/16 05:44:55 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	size_management_integers(void)
{
	long long int tmp;

	tmp = 0;
	if (g_current_data.size == HH)
		tmp = (long long int)((signed char)va_arg(g_current_data.list, int));
	else if (g_current_data.size == H)
		tmp = (long long int)((short int)va_arg(g_current_data.list, int));
	else if (g_current_data.size == L)
		tmp = (long long int)(va_arg(g_current_data.list, long int));
	else if (g_current_data.size == LL)
		tmp = va_arg(g_current_data.list, long long int);
	else
		tmp = va_arg(g_current_data.list, int);
	g_current_data.value = ft_memcpy(ft_memalloc(sizeof(tmp)), &tmp, sizeof(tmp));
}

static	void	size_management_unsigned(void)
{
	unsigned long long int tmp;

	tmp = 0;
	if (g_current_data.size == HH)
	{
		tmp = (unsigned long long int)((unsigned char)va_arg \
		(g_current_data.list, unsigned int));
	}
	else if (g_current_data.size == H)
		tmp = (unsigned long long int)((unsigned short int)va_arg \
		(g_current_data.list, unsigned int));
	else if (g_current_data.size == L)
	{
		tmp = (long long int)(va_arg(g_current_data.list, \
		unsigned long int));
	}
	else if (g_current_data.size == LL)
	{
		tmp = va_arg(g_current_data.list, \
		unsigned long long int);
	}
	else
	{
		tmp = va_arg(g_current_data.list, unsigned int);
	g_current_data.value = ft_memcpy(ft_memalloc(sizeof(tmp)), \
	&tmp, sizeof(tmp));
	}
}

static	void	size_management_ponter(void)
{
	size_t tmp;

	tmp = 0;
	
	tmp = (size_t)va_arg(g_current_data.list, size_t);
	g_current_data.value = ft_memcpy(ft_memalloc(sizeof(tmp)), \
	&tmp, sizeof(tmp));
}

static	void	size_management_char(void)
{
	char tmp;

	tmp = 0;
	
	tmp = (char)va_arg(g_current_data.list, int);
	g_current_data.value = ft_memcpy(ft_memalloc(sizeof(tmp)), \
	&tmp, sizeof(tmp));
}

static	void	size_management_string(void)
{
	char *tmp;

	tmp = 0;
	
	tmp = va_arg(g_current_data.list, char *);
	g_current_data.value = ft_strdup(tmp);
}

static	void	size_management_float(void)
{
	double		d;
	long double	ld;
	float		f;

	d = 0;
	ld = 0;
	f = 0;
	if (g_current_data.size == L)
	{
		d = (va_arg(g_current_data.list, double));
		g_current_data.value = ft_memcpy(ft_memalloc(sizeof(d)), \
		&d, sizeof(d));
	}
	else if (g_current_data.size == L_BIG)
	{
		ld = va_arg(g_current_data.list, long double);
		g_current_data.value = ft_memcpy(ft_memalloc(sizeof(ld)), \
		&d, sizeof(ld));
	}
	else
	{
		f = (float)va_arg(g_current_data.list, double);
		g_current_data.value = ft_memcpy(ft_memalloc(sizeof(f)), \
		&f, sizeof(f));
	}
}

void			init_size_management(void)
{
	if (g_current_data.type == INTEGERS)
		size_management_integers();
	else if (g_current_data.type == UNSIGNED)
		size_management_unsigned();
	else if (g_current_data.type == POINTER)
		size_management_ponter();
	else if (g_current_data.type == STRING)
		size_management_string();
	else if (g_current_data.type == FLOAT)
		size_management_float();
	else if (g_current_data.type == CHAR)
		size_management_char();
}
