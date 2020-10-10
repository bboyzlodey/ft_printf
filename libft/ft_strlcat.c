/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 18:57:08 by asybil            #+#    #+#             */
/*   Updated: 2019/10/28 20:36:57 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	size_t	k;

	j = 0;
	i = 0;
	while (dst[i] && i < size)
		i++;
	k = i;
	while (src[j] && k < (size - 1) && size)
		dst[k++] = src[j++];
	if (k < size)
		dst[k] = '\0';
	return (ft_strlen(src) + i);
}
