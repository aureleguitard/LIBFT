/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 15:02:49 by auguitar          #+#    #+#             */
/*   Updated: 2018/10/25 19:08:33 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *i;

	i = (char *)s;
	while (*i != (char)c)
	{
		if (*i == 0)
			return (NULL);
		i++;
	}
	return (i);
}