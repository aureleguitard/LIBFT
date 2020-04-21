/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 16:28:57 by auguitar          #+#    #+#             */
/*   Updated: 2018/11/28 17:10:58 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*a;
	char			b;

	a = (char *)s;
	b = (unsigned char)c;
	i = 0;
	while (n > i)
	{
		if (a[i] == b)
			return (a + i);
		i++;
	}
	return (NULL);
}
