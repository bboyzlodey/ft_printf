/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 17:45:42 by asybil            #+#    #+#             */
/*   Updated: 2019/10/26 16:53:41 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *app, size_t n)
{
	char	r[2];

	r[1] = '\0';
	while (dest && app && n && *app)
	{
		r[0] = *(app++);
		ft_strcat(dest, r);
		n--;
	}
	return (dest);
}
