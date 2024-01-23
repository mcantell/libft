/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:54:50 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/23 17:11:45 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*war;

	if (!lst || !del)
		return ;
	while ((*lst))
	{
		war = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = war;
	}
}
