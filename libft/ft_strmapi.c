/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:09:15 by asybil            #+#    #+#             */
/*   Updated: 2019/10/26 16:53:33 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	i = 0;
	if (!(s))
		return (NULL);
	map = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		map[i] = f(i, s[i]);
		i++;
	}
	return (map);
}
