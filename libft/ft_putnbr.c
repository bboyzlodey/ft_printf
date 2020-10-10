/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:07:21 by asybil            #+#    #+#             */
/*   Updated: 2019/10/28 16:27:51 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr(int n)
{
	if (!n)
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		putnbr((n / 10) * (-1));
	}
	else
		putnbr(n / 10);
	if (n < 0)
		ft_putchar(((n % 10) * (-1)) + '0');
	else
		ft_putchar((n % 10) + '0');
}

void		ft_putnbr(int n)
{
	if (n != 0)
	{
		putnbr(n);
		return ;
	}
	else
		ft_putchar('0');
}
