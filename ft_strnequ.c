/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 15:10:09 by auguitar          #+#    #+#             */
/*   Updated: 2018/11/26 19:40:27 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char			*a;
	char			*b;
	size_t			i;

	a = (char *)s1;
	b = (char *)s2;
	i = 0;
	if (s1 && s2)
	{
		while (a[i] && (a[i] == b[i]) && (i < n))
			i++;
		if (a[i] != b[i] && (i < n))
			return (0);
		else
			return (1);
	}
	return (0);
}
