/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 15:37:49 by auguitar          #+#    #+#             */
/*   Updated: 2018/11/27 18:33:09 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*b;
	unsigned char	*d;
	size_t			i;

	a = (unsigned char)c;
	b = (unsigned char *)dst;
	d = (unsigned char *)src;
	i = 0;
	while (n > i && (i == 0 || d[i - 1] != a))
	{
		b[i] = d[i];
		i++;
	}
	if (i > 0 && d[i - 1] == a)
		return (b + i);
	else
		return (0);
}
