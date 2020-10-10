/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:46:27 by asybil            #+#    #+#             */
/*   Updated: 2019/10/26 16:57:49 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	const char	*s1;
	size_t		size;

	s1 = s;
	while (*s1 == ' ' || *s1 == '\t' || *s1 == '\n')
		s1++;
	if (!*s1)
		return (ft_strnew(0));
	size = ft_strlen(s1) - 1;
	while (s1[size] == ' ' || s1[size] == '\t' || s1[size] == '\n')
		size--;
	return (ft_strncpy(ft_strnew(size + 1), s1, size + 1));
}
