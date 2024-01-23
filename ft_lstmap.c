/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:12:57 by mcantell          #+#    #+#             */
/*   Updated: 2024/01/23 20:11:25 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*z;

	if (!lst || !f)
		return (NULL);
	new = ft_lstnew(f(lst-> content));
	if (!new)
		return (NULL);
	z = new;
	lst = lst->next;
	while (lst)
	{
		z->next = ft_lstnew(f(lst->content)); //cosí ti crei la casella succcessiva
		if (!z->next)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		lst = lst->next;
		z = z->next;//cosí ti ci sposti dentro
	}
	return (new);
}
