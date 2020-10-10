/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 23:20:58 by asybil            #+#    #+#             */
/*   Updated: 2019/10/28 13:56:19 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	bytes_int(int nbr)
{
	int	i;

	i = 0;
	while (nbr)
	{
		nbr = nbr / 10;
		i++;
	}
	if (nbr < 0)
		i++;
	else if (!nbr && !i)
		i++;
	return (i);
}

static void	ft_revstring(char *s1, int j, int i)
{
	char	h;

	if (!s1[i])
		return ;
	h = s1[i];
	ft_revstring(s1, j - 1, i + 1);
	s1[j] = h;
}

static int	del_int(int n)
{
	int	j;

	j = n % 10;
	if (j >= 0)
		return (j);
	return (j * (-1));
}

char		*ft_itoa(int n)
{
	char	*new;
	int		i;

	i = 0;
	new = NULL;
	new = ft_strnew(bytes_int(n));
	if (new && n < 0)
		new[i++] = '-';
	else if (!n)
		new[i] = '0';
	while (n && new)
	{
		new[i++] = del_int(n) + '0';
		n = n / 10;
	}
	if (new && new[0] != '-')
		ft_revstring(new, ft_strlen(new) - 1, 0);
	else if (new && new[0] == '-')
		ft_revstring(new + 1, ft_strlen(new) - 2, 0);
	return (new);
}
