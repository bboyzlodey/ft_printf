/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:55:55 by asybil            #+#    #+#             */
/*   Updated: 2019/10/09 20:18:29 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (!(s1 && s2))
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && n != 0)
	{
		i++;
		n--;
	}
	if (!n)
		i--;
	if (s1[i] == s2[i])
		return (0);
	else if ((unsigned char)s1[i] > (unsigned char)s2[i])
		return (1);
	return (-1);
}
