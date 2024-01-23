/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:26:45 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/23 16:04:41 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*war;

	war = *lst;
	if (new == NULL)
		return ;
	if (war == NULL)
	{
		*lst = new;
		return ;
	}
	while (war-> next)
		war = war-> next;
	war -> next = new;
}
