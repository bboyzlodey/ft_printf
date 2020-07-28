/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 20:32:15 by asybil            #+#    #+#             */
/*   Updated: 2020/07/28 20:32:15 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.h"

/**
 * ft_strjoindel - join two string and free his.
 * Return value - joined string allocated with malloc.
 * */
char	*ft_strjoindel(char *s1, char *s2)
{
	char	*new;

	new = ft_strjoin(s1, s2);
	free(s1);
	s1 = NULL;
	ft_strclr(s2);
	return (new);
}