/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 14:31:47 by auguitar          #+#    #+#             */
/*   Updated: 2018/11/26 19:33:54 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	char	*a;
	char	*b;
	int		i;

	i = 0;
	if (s1 && s2)
	{
		a = (char *)s1;
		b = (char *)s2;
		while (a[i] || b[i])
		{
			if (a[i] - b[i] != 0)
				return (0);
			i++;
		}
	}
	return (1);
}
