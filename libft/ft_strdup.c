/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:55:53 by asybil            #+#    #+#             */
/*   Updated: 2019/10/09 19:58:03 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	int		i;
	char	*newstr;

	if (!(i = ft_strlen(src)))
		return (NULL);
	newstr = (char *)malloc(sizeof(*src) * (i + 1));
	i = 0;
	while (newstr)
	{
		newstr[i] = src[i];
		if (!src[i])
			break ;
		i++;
	}
	return (newstr);
}
