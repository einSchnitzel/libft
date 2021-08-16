/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 13:22:04 by smetzler          #+#    #+#             */
/*   Updated: 2021/08/16 17:09:06 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*helper;

	while (*lst && del)
	{	
		helper = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = helper;
	}
	*lst = NULL;
}
