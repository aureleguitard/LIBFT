/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 11:00:55 by auguitar          #+#    #+#             */
/*   Updated: 2018/10/30 14:04:25 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t				i;
	size_t				j;
	char				*a;
	char				*b;

	i = 0;
	a = (char *)haystack;
	b = (char *)needle;
	if (*a != 0 && *b == 0)
		return (a);
	else if (*a == 0 && *b == 0)
		return (a);
	else if (*a != 0 || (*a != 0 && *b != 0))
		while (a[i])
		{
			j = 0;
			while (a[i + j] == b[j] && i + j < len)
			{
				if (b[j + 1] == '\0')
					return (a + i);
				j++;
			}
			i++;
		}
	return (0);
}
