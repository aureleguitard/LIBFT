/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 17:17:22 by auguitar          #+#    #+#             */
/*   Updated: 2018/11/26 20:01:21 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	char	*b;
	char	*c;

	b = (char *)s1;
	c = (char *)s2;
	if (s1 && s2)
	{
		a = ft_strnew(ft_strlen(b) + ft_strlen(c));
		if (!a || !b || !c)
			return (NULL);
		a = ft_strcpy(a, b);
		a = ft_strcat(a, c);
		return (a);
	}
	return (NULL);
}
