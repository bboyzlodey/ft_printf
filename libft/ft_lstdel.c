/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 19:02:20 by asybil            #+#    #+#             */
/*   Updated: 2019/10/28 20:03:28 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next_1;
	t_list	*current;

	if (!alst || !del)
		return ;
	current = *alst;
	next_1 = current->next;
	while (current)
	{
		next_1 = current->next;
		ft_lstdelone(&current, del);
		current = next_1;
	}
	*alst = NULL;
}
