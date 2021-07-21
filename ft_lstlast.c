/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 23:08:09 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/21 09:58:52 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *helper;

	while (lst->next != NULL)
	{
		helper->content = lst->content;
		helper->next = lst->next;
		lst = lst->next;
	}
	return(helper);
}