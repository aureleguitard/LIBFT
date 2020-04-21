/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:03:29 by auguitar          #+#    #+#             */
/*   Updated: 2018/10/30 15:38:13 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*a;
	char	*b;

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
			while (a[i + j] == b[j])
			{
				if (b[j + 1] == '\0')
					return (a + i);
				j++;
			}
			i++;
		}
	return (0);
}
