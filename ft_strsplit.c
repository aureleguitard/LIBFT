/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguitar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 15:17:57 by auguitar          #+#    #+#             */
/*   Updated: 2018/11/28 18:52:40 by auguitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_chaine(char *str, char c)
{
	int		i;
	char	*dest;

	i = 0;
	dest = 0;
	while (str[i] && str[i] != c)
		i++;
	dest = (char*)malloc(sizeof(char) * (i - 1));
	if (((dest = (char*)malloc(sizeof(char) * (i - 1))) == 0))
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	ft_count(char *str, char c)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	*ft_freesplit(char **strng)
{
	int		i;

	i = 0;
	while (strng[i])
	{
		free(strng[i]);
		i++;
	}
	free(strng);
	return (NULL);
}

char		**ft_strsplit(char const *str, char c)
{
	int		i;
	int		count;
	char	**dest;

	if (str && c)
	{
		if (((dest = (char **)malloc(sizeof(char *)
							* (ft_count((char *)str, c) + 1)))) == 0)
			return (NULL);
		i = 0;
		count = 0;
		while (str[i])
			if (str[i] != c)
			{
				if ((dest[count++] = ft_chaine((char *)str + i, c)) == NULL)
					ft_freesplit(dest);
				while (str[i] && str[i] != c)
					i++;
			}
			else
				i++;
		dest[count] = 0;
		return (dest);
	}
	return (0);
}
