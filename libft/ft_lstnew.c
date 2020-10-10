/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 18:34:55 by asybil            #+#    #+#             */
/*   Updated: 2019/10/28 18:49:46 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = NULL;
	new = malloc(sizeof(t_list));
	if (new)
	{
		new->content = (void*)content;
		if (!content)
			new->content_size = 0;
		else
			new->content_size = content_size;
		new->next = NULL;
	}
	return (new);
}
