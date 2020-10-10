/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asybil <asybil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:18:43 by asybil            #+#    #+#             */
/*   Updated: 2019/09/30 23:19:45 by asybil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *dest, const char *app)
{
	ft_strncpy(dest + ft_strlen(dest), app, ft_strlen(app) + 1);
	return (dest);
}
