/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 19:24:03 by asybil            #+#    #+#             */
/*   Updated: 2019/11/26 23:54:10 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (size == 0)
		return (NULL);
	if (!(tmp = (char*)malloc(sizeof(tmp) * (size + 1))))
		return (NULL);
	while (i < size)
		tmp[i++] = 0;
	tmp[size] = '\0';
	return (tmp);
}
