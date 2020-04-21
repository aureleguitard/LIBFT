/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 11:52:56 by auguitar          #+#    #+#             */
/*   Updated: 2018/11/26 19:29:47 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	if (s == 0 || f == 0)
		return ;
	if (s)
	{
		while (s[i])
		{
			(*f)(&s[i]);
			i++;
		}
	}
}
