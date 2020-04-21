/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 16:07:04 by auguitar          #+#    #+#             */
/*   Updated: 2018/10/25 19:09:35 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*max;

	max = 0;
	while (*s)
	{
		if (*s == (char)c)
			max = (char *)s;
		s++;
	}
	if (*s == (char)c)
	{
		max = (char *)s;
	}
	return (max);
}
