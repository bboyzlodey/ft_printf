/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 19:54:03 by asybil            #+#    #+#             */
/*   Updated: 2019/09/25 20:16:18 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*map;
	int		i;

	i = 0;
	map = NULL;
	if (s && f)
		map = ft_strnew(ft_strlen(s));
	while (map && s[i])
	{
		map[i] = f(s[i]);
		i++;
	}
	return (map);
}
