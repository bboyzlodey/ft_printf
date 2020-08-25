/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 18:13:30 by asybil            #+#    #+#             */
/*   Updated: 2019/10/28 18:14:22 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	char	*t;

	if (l && (((t = ft_strstr(b, l)) + ft_strlen(l)) <= len + ((char*)b)))
		return (t);
	if (!*l)
		return ((char*)b);
	return (NULL);
}
