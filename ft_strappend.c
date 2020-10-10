/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:31:57 by asybil            #+#    #+#             */
/*   Updated: 2020/08/24 18:26:42 by jsabina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strappend_xx(char **dst, char **s2)
{
	ft_strrealloc(dst, ft_strlen(*s2));
	ft_strcpy(*dst + ft_strlen(*dst), *s2);
	ft_strdel(s2);
	return (*dst);
}

char	*ft_strappend_xo(char **dst, char *s2)
{
	ft_strrealloc(dst, ft_strlen(s2));
	ft_strcpy(*dst + ft_strlen(*dst), s2);
	return (*dst);
}

char	*ft_strappend_ox(char *s2, char **dst)
{
	char *new;

	if (!*dst || !s2)
		return (NULL);
	if (!(new = ft_strnew(ft_strlen(*dst) + ft_strlen(s2))))
		return (NULL);
	ft_strcpy(new, s2);
	ft_strcat(new, *dst);
	ft_strdel(dst);
	*dst = new;
	return (*dst);
}

int		ft_numlen_base_unsigned(unsigned long long int n, size_t base)
{
	if (n >= (unsigned long long int)base)
		return (ft_numlen_base_unsigned(n / base, base) + 1);
	return (1);
}

int		ft_abs(int n)
{
	return (n < 0 ? -n : n);
}
