/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:30:09 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/22 16:32:38 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t s)
{
	unsigned char		*cis;
	const unsigned char	*trans;
	size_t				n;

	n = 0;
	cis = (unsigned char *)dest;
	trans = (unsigned char *)src;
	while (n < s && s > 0)
	{
		cis[n] = trans[n];
		n++;
	}
	return (dest);
}
