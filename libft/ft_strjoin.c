/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 20:40:02 by asybil            #+#    #+#             */
/*   Updated: 2019/10/14 13:20:37 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	return (ft_strcat(ft_strcpy(ft_strnew(len), s1), s2));
}
