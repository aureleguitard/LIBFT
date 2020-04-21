/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 15:14:24 by auguitar          #+#    #+#             */
/*   Updated: 2018/11/26 19:51:46 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*b;

	i = 0;
	if (s)
	{
		if ((b = ((char *)malloc(sizeof(char) * len + 1))) == 0)
			return (NULL);
		while (i < len && b)
		{
			b[i] = s[start];
			i++;
			start++;
		}
		b[i] = '\0';
		return (b);
	}
	return (0);
}
