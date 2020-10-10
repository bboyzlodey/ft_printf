/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 02:24:18 by asybil            #+#    #+#             */
/*   Updated: 2019/09/27 02:24:37 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	if (!(n && arr))
		return (NULL);
	else if (((unsigned char)c) == *((unsigned char*)arr))
		return (((void*)arr));
	return (ft_memchr(arr + 1, c, n - 1));
}
