/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:15:55 by asybil            #+#    #+#             */
/*   Updated: 2019/09/16 20:05:36 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1 && s2) && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (!(s1 && s2) || s1[i] == s2[i])
		return (0);
	else if ((unsigned char)s1[i] > (unsigned char)s2[i])
		return (1);
	return (-1);
}
