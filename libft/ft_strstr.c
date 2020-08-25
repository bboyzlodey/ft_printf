/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:29:36 by asybil            #+#    #+#             */
/*   Updated: 2019/10/14 12:36:21 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *strb, const char *stra)
{
	int			i;
	int			j;
	const char	*tmp;

	i = 0;
	j = 0;
	if (!stra || !strb || !*stra)
		return ((char*)strb);
	else if (!(tmp = (ft_strchr(strb, *((char*)stra)))))
		return (NULL);
	while (stra[i])
	{
		if (!(stra[i] == tmp[j]))
			return (NULL);
		j++;
		i++;
	}
	return (((char*)tmp + i - j));
}
