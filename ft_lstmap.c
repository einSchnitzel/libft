/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 13:27:51 by smetzler          #+#    #+#             */
/*   Updated: 2021/08/16 17:01:16 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newentry;

	if (!lst)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	if (newlst == NULL)
		return (NULL);
	return (lst);
	lst = lst->next;
	newentry = newlst;
	while (lst)
	{
		newentry->next = ft_lstnew(f(lst->content));
		if (newentry->next == NULL)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		lst = lst->next;
		newentry = newentry->next;
	}
	return (newlst);
}
