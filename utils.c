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
 ** ft_strjoindel - join two string and free his.
 ** Return value - joined string allocated with malloc.
 * */
char	*ft_strjoindel(char *s1, char *s2)
{
	char	*new;

	new = ft_strjoin(s1, s2);
	ft_strdel(&s1);
	ft_strdel(&s2);
	return (new);
}

void	global_free(void)
{
	ft_strdel(&(g_current_data.str.str));
	g_current_data.str.len = 0;
	g_current_data.size = 0;
	g_current_data.width = 0;
	ft_bzero(g_current_data.flags, sizeof(g_current_data.flags));
	ft_bzero(g_current_data.pars, sizeof(g_current_data.pars));
	ft_bzero(g_current_data.que, sizeof(g_current_data.que));
	g_current_data.precision = 0;
	g_current_data.type = 0;
	ft_memdel(&(g_current_data.value));	
}

void	initstructure()
{
	g_current_data.value = NULL;
	g_current_data.str.str = NULL;
	g_current_data.delimeters = 0;
	g_current_data.precision = 0;
	g_current_data.sign = 0;
	g_current_data.skip = 0;
	g_current_data.str.len = 0;
	g_current_data.size = 0;
	g_current_data.upper = 0;
	g_current_data.type = -1;
	g_current_data.width = 0;
	ft_bzero(g_current_data.flags, sizeof(g_current_data.flags));
	ft_bzero(g_current_data.pars, sizeof(g_current_data.pars));
	ft_bzero(g_current_data.que, sizeof(g_current_data.que));
	g_current_data.spec = -1;
}