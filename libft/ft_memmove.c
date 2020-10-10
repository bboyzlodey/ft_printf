/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:10:13 by asybil            #+#    #+#             */
/*   Updated: 2019/09/27 02:21:30 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char reserve;

	if (!(n && dst && src))
		return (dst);
	else
		reserve = *((unsigned char*)src);
	ft_memmove(dst + 1, src + 1, n - 1);
	*((unsigned char*)dst) = reserve;
	return (dst);
}
