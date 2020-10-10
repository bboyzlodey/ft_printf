/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 03:56:29 by asybil            #+#    #+#             */
/*   Updated: 2019/10/26 16:54:03 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, const char *src, size_t num)
{
	size_t	i;

	i = 0;
	while (dest && src && src[i] && num)
	{
		dest[i] = src[i];
		i++;
		num--;
	}
	ft_bzero(dest + i, num);
	return (dest);
}
