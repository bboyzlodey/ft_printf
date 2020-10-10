/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 02:09:24 by asybil            #+#    #+#             */
/*   Updated: 2019/10/09 19:57:08 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int			g;
	const void	*r;

	r = src;
	while (n && dst && src)
	{
		g = *((unsigned char*)src);
		*((char*)dst) = *((char*)src);
		dst++;
		src++;
		if (g == c)
			break ;
		n--;
	}
	src = r;
	if (g != c)
		return (NULL);
	return (dst);
}
