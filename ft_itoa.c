/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:34:13 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/22 16:03:54 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static unsigned	int	ft_intstr(int n)
{
	unsigned int	l;

	l = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		l += 1;
	while (n != 0)
	{
		n /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int i)
{
	char			*str;
	long int		j;
	int				len;

	len = ft_intstr(i);
	str = (char *)malloc(sizeof(char) * (len + 1));
	j = (long int ) i;
	if (str == NULL)
		return (NULL);
	if (i < 0)
	{
		str[0] = '-';
		j *= -1;
	}
	if (j == 0)
		str[0] = '0';
	str[len] = '\0';
	while (j != '\0')
	{
		str[len - 1] = (j % 10) + '0';
		j = j / 10;
		len--;
	}
	return (str);
}
