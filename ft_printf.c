/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:33:59 by asybil            #+#    #+#             */
/*   Updated: 2020/07/28 20:37:29 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * go_next_percent, initilize, print_current, print_stroke
 * Устаревшие функции,
 * которые наврядли будут использоваться в проекте.
 * */
static	int	go_next_percent()
{
	char	*tmp;
	
	tmp = NULL;
	if (current_adr && (tmp = ft_strchr(current_adr, '%')))
	{
		writed += write(1, current_adr, tmp - current_adr);
		current_adr = tmp;
		return (1);
	}
	int		str;

	str = 0;
	if (current_adr)
	{
		writed += write(1, current_adr, (str = ft_strlen(current_adr)));
		current_adr += (str - 1);
	}
	return (0);
}

static void		initilize()
{
	ft_bzero(current_data, CURRENT_SIZE);
	current_adr = NULL;
	type = NULL;
	prefix = NULL;
	writed = 0;
	prefix_len = 0;
	min_weight = 0;
	len = 0;

}

static void		print_current(void)
{
	writed += write(1, current_data, len);
	ft_strclr(current_data);
	len = 0;
}

static void	print_stroke(char begin) // не нужна
{

	writed += write(1, begin, ft_strchr(begin, '%') - begin);
}

int ft_printf(const char *format, ...)
{
	return 1;
}