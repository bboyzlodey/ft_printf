/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:23:37 by asybil            #+#    #+#             */
/*   Updated: 2019/10/28 16:51:01 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_revstring(char *s1, int j, int i)
{
	char	h;

	if (!s1[i])
		return ;
	h = s1[i];
	ft_revstring(s1, j - 1, i + 1);
	s1[j] = h;
}

void		ft_putnbr_fd(int n, int fd)
{
	char	temp[13];
	int		i;
	int		k;

	i = 0;
	k = 1;
	ft_strclr(temp);
	if (fd < 0)
		return ;
	if (n == 0)
		write(fd, "0", 1);
	else if (n < 0)
	{
		k = -1;
		write(fd, "-", 1);
	}
	while (n)
	{
		temp[i++] = ((n % 10) * k) + '0';
		n = n / 10;
	}
	ft_revstring(temp, ft_strlen(temp) - 1, 0);
	ft_putstr_fd(temp, fd);
}
