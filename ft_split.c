/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:39:54 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/23 13:21:31 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *str, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			word++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	f;

	i = 0;
	if (!s)
		return ('\0');
	str = malloc(sizeof(char *) * (ft_count((char *)s, c) + 1));
	if (!str)
		return ('\0');
	while (*s)
	{
		if (*s != c)
		{
			f = 1;
			while (*s && *s != c && f++)
				s++;
			str[i] = ft_substr(s - f + 1, 0, f - 1);
			i++;
		}
		else
			s++;
	}
	str[i] = '\0';
	return (str);
}
