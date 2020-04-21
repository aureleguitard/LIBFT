/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 16:51:32 by auguitar          #+#    #+#             */
/*   Updated: 2018/11/27 17:52:55 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	a;
	char			*d;
	size_t			i;

	i = 0;
	a = (unsigned char)c;
	d = (char *)b;
	while (len > i)
	{
		d[i] = a;
		i++;
	}
	return ((void *)d);
}
