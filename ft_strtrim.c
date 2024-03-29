/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:14:37 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/23 12:04:31 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;
	char	*str;

	i = 0;
	str = NULL;
	l = ft_strlen(s1);
	if (s1)
	{
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[l - 1] && ft_strchr(set, s1[l - 1]))
			l--;
		str = (char *)malloc(sizeof(char) * (l - i + 1));
		if (!str)
			return (NULL);
		if (str)
			ft_strlcpy(str, &s1[i], l - i + 1);
	}
	return (str);
}
