/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 20:48:57 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/21 09:59:32 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list		*newlist;

	newlist = malloc(sizeof(t_list));
	if (!newlist)
		return(NULL);
	newlist->content = content;
	newlist->next = NULL;
	return(newlist);
}