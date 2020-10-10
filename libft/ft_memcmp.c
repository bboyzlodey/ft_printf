/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 02:51:31 by asybil            #+#    #+#             */
/*   Updated: 2019/10/28 18:11:51 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	if (!n || (!arr1 && !arr2))
		return (0);
	else if (!arr1)
		return (-1);
	else if (!arr2 || *((unsigned char*)arr1) > *((unsigned char*)arr2))
		return (1);
	else if (!arr1 || *((unsigned char*)arr1) < *((unsigned char*)arr2))
		return (-1);
	return (ft_memcmp(arr1 + 1, arr2 + 1, n - 1));
}
