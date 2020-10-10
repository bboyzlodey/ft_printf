/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 23:01:27 by asybil            #+#    #+#             */
/*   Updated: 2019/10/27 23:15:37 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words(char const *s, char c)
{
	int	i;
	int	world;

	i = 0;
	world = 0;
	while (s && s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		world++;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (!s[i])
			break ;
		i++;
	}
	return (world);
}

static char	*ft_strdelim(char *s, char del, int *i)
{
	char	*temp;
	int		j;

	j = *i;
	while (s[j] == del)
		j++;
	*i = j;
	if ((temp = ft_strchr(s + j, del)))
		return (ft_strsub(s, j, temp - (s + j)));
	return (ft_strsub(s, j, ft_strlen(s + j)));
}

char		**ft_strsplit(char const *s, char c)
{
	char	**new;
	int		world;
	int		i;
	int		j;

	j = 0;
	i = 0;
	world = words(s, c);
	new = (char**)malloc(sizeof(char*) * (world + 1));
	new[world] = NULL;
	while (new && world > 0)
	{
		new[j] = ft_strdelim((char*)s, c, &i);
		if (world)
			i = ft_strchr(s + i, c) - s;
		world--;
		j++;
	}
	return (new);
}
