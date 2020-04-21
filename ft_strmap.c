/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 15:44:14 by auguitar          #+#    #+#             */
/*   Updated: 2018/11/26 19:31:22 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*a;
	int		i;

	i = 0;
	if (s)
	{
		while (s[i])
			i++;
		a = (char*)malloc(sizeof(char) * (i + 1));
		if (a == 0)
			return (NULL);
		i = 0;
		while (s[i])
		{
			a[i] = (*f)(s[i]);
			i++;
		}
		a[i] = '\0';
		return (a);
	}
	return (NULL);
}
